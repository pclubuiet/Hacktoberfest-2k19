import java.util.HashMap;
import java.util.Map;
import java.util.function.BiFunction;

public class Calculator {

    private static Map<String, BiFunction<Integer, Integer, Integer>> calcAction = new HashMap<>();

    static {
        calcAction.put("+", (num1, num2) -> num1 + num2);
        calcAction.put("-", (num1, num2) -> num1 - num2);
        calcAction.put("/", (num1, num2) -> num1 / num2);
        calcAction.put("*", (num1, num2) -> num1 * num2);
    }

    public static void main(String[] args) {
        resolve(1, 2, "+");
        resolve(3, 4, "*");
        resolve(3, 4, "--");
    }

    private static void resolve(int num1, int num2, String operator) {

        BiFunction<Integer, Integer, Integer> function = calcAction.get(operator);

        if (function != null) {

            Integer resultMathOperation = function.apply(num1, num2);

            String log = String.format(
                    "%d %s %d = %d",
                    num1,
                    operator,
                    num2,
                    resultMathOperation
            );

            System.out.println(log);

        } else {
            System.out.println(String.format("operator \"%s\" is not supported", operator));
        }
    }


}

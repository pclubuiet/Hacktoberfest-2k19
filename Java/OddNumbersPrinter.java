import java.util.stream.IntStream;

public class OddNumbersPrinter {

    public static void main(String[] args) {

        IntStream.range(1, 101)
                .filter(number -> number % 2 == 0)
                .forEach(System.out::println);

    }

}

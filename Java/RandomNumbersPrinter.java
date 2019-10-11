import java.util.Random;
import java.util.stream.IntStream;

public class RandomNumbersPrinter {

    public static void main(String[] args) {

        IntStream.range(0, 10)
                .mapToObj(num -> new Random().nextInt(Integer.MAX_VALUE))
                .forEach(System.out::println);

    }

}

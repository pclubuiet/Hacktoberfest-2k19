
public class PrintOddsTill100Main {

  public static void main(String[] args) {

    for (int index = 1; index < 100; index++) {
      if (index % 2 != 0) {
        System.out.print(index + " ");
      }
    }
  }
}

import java.util.Scanner;

public class Calculator {

	public static void main(String[] args) {

		double a, b, result;

		Scanner read = new Scanner(System.in);

		System.out.println( "Enter first number ");
		a = read.nextDouble();

		System.out.println( "Enter the second number ");
		b = read.nextDounle();

  		char c;
		System.out.println( "Enter the operation to perform ");
		c = read.next().charAt(0);

		read.close();

		switch (c) {
		case '+':
			result = a + b;
			break;

		case '-':
			result = a - b;
			break;

		case '*':
			result = a * b;
			break;

		case '/':
			result = a / b;
			break;

  		default :
			System.out.println( "Wrong opeartion ");
			break;

		}
		
		System.out.println( "Result is " + result );
	}
}	

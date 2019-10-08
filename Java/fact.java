import java.util.Scanner;

public class fact {
	public static int fact(int n) {
		if(n==0)
			return 1;
		else
			return n*fact(n-1);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int a = sc.nextInt();
		int b = fact(a);
		System.out.println("Factorial of "+a+" is "+b);
	}

}

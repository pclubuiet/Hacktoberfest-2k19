import java.util.*;
public class difference {
    public static void main(String args[]) {
	//creating object for scanner class	
	Scanner s = new Scanner(System.in);
	//creating two integer variables and getting input 	
	int no1 , no2 ;
	System.out.println("Please enter two numbers");
	no1 = s.nextInt();
	no2 = s.nextInt();
	//printing the calculated sum
	System.out.println("The difference between first no and second no is "+(no1 - no2));        
	}
}

package Basics;

import java.util.Scanner;

public class PalindromeNumber {

    /**
     * This method checks if the original number that is the entered number is a palindrome or not
     * @param enteredNum is the number entered by the user
     */
    private static void checkPalindrome (int enteredNum){

        //declaring vars to use int the function
        //a temp variable is used to store the enteredNumber
        int reverseNumber = 0, temp, remainder = 0;
        temp = enteredNum;
        while(temp != 0){
            remainder = temp % 10;
            reverseNumber = reverseNumber * 10 + remainder;
            temp /= 10;
        }

        if (reverseNumber == enteredNum){
            System.out.println("The number is a palindrome.");
        }else{
            System.out.println("The number is not a palindrome");
        }

    }
    public static void main(String[] args) {

        //declaring vars for the input from the user
        int enteredNumber = 0;


        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number > ");
        enteredNumber = scanner.nextInt();
        scanner.close();

        checkPalindrome(enteredNumber);
    }
}

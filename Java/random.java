import java.util.Random; 
  
public class generateRandom{ 
  
    public static void main(String args[]) 
    { 
         System.out.println("10 random numbers in JAVA");
        
        Random rand = new Random(); 
  
        // Generate random integers in range 0 to 999 

        for(int i=0;i<9;i++)
        {
               int rand_int = rand.nextInt(1000); 
               System.out.print(rand_int + " ");
               System.out.println();

        }
       
       
  
       
    } 
} 
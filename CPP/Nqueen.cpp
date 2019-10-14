
 
#include<stdio.h> 
#include<stdbool.h> 

int board[100][100] = {0}; 
  

void printSolution(int N) 
{ 
    for (int i = 0; i < N; i++) 
    { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
} 
  

bool isSafe(int N, int row, int col) 
{ 
    int i, j; 
  
   
    for (i = 0; i < col; i++) 
        if (board[row][i]){

           // printf("Queen cannot be placed here\n");
            return false; 
          }
  
    
    for (i=row, j=col; i>=0 && j>=0; i--, j--) 
        if (board[i][j]) {
          // printf("Queen cannot be placed here\n");
          return false; 
        }
            
  
    for (i=row, j=col; j>=0 && i<N; i++, j--) 
        if (board[i][j]) {
          // printf("Queen cannot be placed here\n");
          return false; 

        }
            
  
    return true; 
} 
  

bool solveNQUtil(int N, int col) 
{ 
  
    if (col >= N) {
      // {   printf("All queens are placed\n");
        return true; 
    }
  
   
    for (int i = 0; i < N; i++) 
    { 
         // printf("Check if the queen can be placed \n ");

        if ( isSafe(N, i, col) ) 
        { 
            // printf("Queen is placed \n");
            board[i][col] = 1; 
            for(int f=0; f<N ; f++)
            {
              printf("%d ",board[i][f] );
            }
            printf("\n");

            // printf("Recursive call to place next queen\n");
            
            if ( solveNQUtil(N, col + 1) ) 
                return true; 
  
            
            // printf("Placing queen did not lead to a solution,Backtarcking\n");
            board[i][col] = 0; 
        } 
    } 

    // printf("The queen cannot be placed \n");
   
    return false; 
} 

bool solveNQ(int N) 
{   
    
  
    if ( solveNQUtil(N, 0) == false ) 
    { 
      // printf("Solution does not exist"); 
      return false; 
    } 
  
    printSolution(N); 
    return true; 
} 
  

int main() 
{ int N;

  printf("This programs finds sollution to N queens problem with the help of backtracking.Positions marked with 1 are te places where the queens are placed in the matrix. \n Enter the number of queens to start:");
  scanf("%d",&N);
    solveNQ(N); 
    return 0; 
} 

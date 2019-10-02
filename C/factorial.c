#include<stdio.h>
int factorial(int);
void main()
{
 int num,fact;
 printf("ENTER A NUMBER TO FIND ITS FACTORIAL:");
 scanf("%d",&num);
 fact=factorial(num);//CALLING FACTORIAL FUNCTION
 printf("\n FACTORIAL OF %d: %u ",num,fact);
}
int factorial(int a)//TO FIND FACTORIAL
{
 int p;
 if(a==1)
  return(1);
 else
 {
   p=a*factorial(a-1);//USE OF RECURSION
   return(p);
 }
}

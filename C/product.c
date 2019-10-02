#include<stdio.h>

int main()
{
   int a, b, c;

   printf("Enter two numbers to multiply\n");
   scanf("%d%d", &a, &b);

   c = a * b;

   printf("Product of the numbers = %d\n", c);

   return 0;
}

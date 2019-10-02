#include<stdio.h>
int main(){
int num;
printf("Enter Number \n");
scanf("%d",&num);
if(num%3==0)
printf("Fizz");
else if(num%5==0)
printf("Buzz");
else if(num%3==0 && num%5==0)
printf("FizzBuzz");
else
printf("%d",num);
return 0;
}

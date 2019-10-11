#include<stdio.h>
main()
{
int n,rem,rev=0,m;
printf("enter the number");
scanf("%d",&n);
n=m;
printf("number is %d\n",n);
while(n>0)
{
rem=rem%10;
rev=rev*10+rem;
n=n/10;
}
if(m==rev)
{
printf("\npallindrome number");
}
else
{
printf("not apallindrome number");
}
}

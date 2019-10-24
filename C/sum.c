#include <stdio.h>
int main()
{
   int i,n,sum;
    printf("enter a no. to calculate sum\n");
    scanf("%d",&n);
     for(i=0;i<=n;i++)
	{ 
	    sum =sum + i;
	}
     printf("sum of first %d natural no. is %d \n",n,sum);

      return 0;
}

#include<stdio.h>
void main() {
	int i, n, sum=0;
	printf("please enter a no :-");
	scanf("%d",&n);
	for(i=0;i<=n;i++) {
		sum+=i;
	}
	printf("sum of all natural no's till %d is :-%d", n, sum);
}

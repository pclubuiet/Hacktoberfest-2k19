#include<stdio.h>

int sum_of_first_N_numbers(int n);

int main() {
	int n, sum;
	printf("insert number here\n");
    scanf("%d", &n);
	sum=sum_of_first_N_numbers(n);
	printf("the sum of first %d numbers is %d", n, sum);
    return 0;
}

int sum_of_first_N_numbers(int n){
    n=n*(n+1)/2;
    return n;
}
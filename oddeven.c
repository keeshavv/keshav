#include<stdio.h>
void main()
{
	long int n;
	scanf("%ld",&n);
	if(n % 2 == 0)
		printf("Even");
	else
		printf("Odd");
}
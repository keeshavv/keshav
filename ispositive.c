#include<stdio.h>
void main()
{
	long int n;
	scanf("%ld",&n);
	if(n > 0)
		printf("Positive");
	else if(n < 0)
		printf("Negative");
	else
		printf("Zero");
}

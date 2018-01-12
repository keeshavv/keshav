#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	while(n)
	{
		printf("%d",n%10);
		n/=10;
	}
}

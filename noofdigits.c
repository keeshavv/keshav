#include<stdio.h>
void main()
{
	int n,d=0;
	scanf("%d",&n);
	while(n)
	{
		n=n/10;
		d++;
	}
	printf("%d",d);

}

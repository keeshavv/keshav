#include<stdio.h>
void main()
{
	int n,f=1;
	scanf("%d",&n);
	if(n<=20)
	{
	
	while(n)
	{
		f=f*n;
		n--;
	}
    printf("%d",f);
}
else
 printf("Input limit exceeds");
}

#include<stdio.h>
void main()
{
	int n,k,i=0,s=0;
	scanf("%d%d",&n,&k);
	int a[n];
	while(i<n)
	   {
	   	scanf("%d",&a[i]);
	   	if(i<k)
	   		s+=a[i];
	   	i++;
	   }
	printf("%d",s);
	
}

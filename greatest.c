#include<stdio.h>
void main()
{
	int q,w,e;
	scanf("%d%d%d",&q,&w,&e);
	if(q>w)
	{
		if(q>e)
			printf("%d",q);
		else
			printf("%d",e);
	}
	else
	{
		if(w>e)
			printf("%d",w);
		else
			printf("%d",e);
	}
}
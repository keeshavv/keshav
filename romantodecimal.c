#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int decimal(char r)
{
if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;	
}
void main()
{
	char s[10];
	gets(s);
	int i,n=strlen(s),d=0;
	for(i=0;i<n;i++)
	{
		int d1=decimal(s[i]);
		if(i+1<n)
		{
			int d2=decimal(s[i+1]);
			if(d1>=d2)
			{
				d+=d1;
			
			}
			else
			{
				d+=d2-d1;
				i++;
			}
		}
		else
		{
			d+=d1;
			i++;
		}
	}
	printf("%d",d);
	
}

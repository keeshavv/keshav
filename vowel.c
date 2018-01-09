#include <stdio.h>
void main()
{
	char v[5]={'a','e','i','o','u'},c;
	int i,flag=0;
	scanf("%c",&c);
	for(i=0;i<5;i++)
		{if(v[i]==c)
			{printf("Vowel");
			 flag=1;
			 break;}
		}
	if(flag==0)
		printf("Consonant");


}

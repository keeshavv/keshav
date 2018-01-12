#include<stdio.h>
#include<string.h>
void main()
{
	char s[100000];
	
	scanf("%s",&s);
	int i=strlen(s)-1;
	while(i!=-1)
	 {printf("%c",s[i]);
	  i--;
	 }
}

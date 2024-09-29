#include<stdio.h>
int main()
{
	char s[10];
	int c=0;
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		c++;
	}
	for(int i=c-1;s[i]>=0;i--)
	{
		printf("%c",s[i]);
	}
}
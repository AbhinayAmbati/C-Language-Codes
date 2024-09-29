#include<stdio.h>
int main()
{
	int c=0;
	char s[10];
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		c++;
	}
	printf("%d",c);
}
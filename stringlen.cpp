#include<stdio.h>
int main()
{
	char s[100];
	int c=0;
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		c++;
	}
	printf("%d",c);
	return 0;
}
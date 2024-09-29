#include<stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	int c=0;
	scanf("%s",str1);
	scanf("%s",str2);
	for(int i=0;str1[i]!='\0';i++)
	{
		c++;
	}
	for(int i=0;str2[i]!='\0';i++)
	{
		str1[c+i]=str2[i];
	}
	printf("%s",str1);
}
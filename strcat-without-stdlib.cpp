#include<stdio.h>
int main()
{
	int len=0;
	char s1[50];
	scanf("%s",s1);
	char s2[50];
	scanf("%s",s2);
	for(int i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	for(int i=0;s1[i]!='\0';i++)
	{
		s1[len+i]=s2[i];
	}
	printf("%s",s1);
}
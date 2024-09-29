#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int a=strlen(s);
	int flag=0;
	for(int i=0;i<a/2;i++)
	{
		if(s[i]!=s[a-1-i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Not palindrome");
	}
	else
	{
		printf("palindrome");
	}
}
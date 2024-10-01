#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[100];
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		for(int j=0;s[j+1]!='\0';j++)
		{
			if(s[j]>s[j+1])
			{
				char t=s[j+1];
				s[j+1]=s[j];
				s[j]=t;
			}
		}
	}
	printf("%s",s);
}

#include<stdio.h>
#include<string.h>
int main()
{
	int flag=0;
	char s[50];
	scanf("%s",s);
	char k;
	scanf(" %c",&k);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==k)
		{
		    flag=1;
		    break;
	    }
	}
	if(flag==1)
	{
		printf("Element found");
	}
	else
	printf("Element not found");
}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];int c=0;
	scanf("%s",a);
	char b[30];
	scanf("%s",b);
	for(int i=0;a[i]!='\0';i++)
	{
		for(int j=0;b[j]!='\0';j++)
		{
			if(a[i]==b[j])
			c++;
		}
	}
	if(strlen(a)==c)
	printf("Yes\n");
	else
	printf("No\n");
	return 0;
}
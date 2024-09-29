#include<stdio.h>
int main()
{
	char *str="Hello";
	int c=0;
	
	{
		printf("%c",*str);
		str++;
		c++;
	}
	printf("\n");
	printf("%d",c);
	return 0;
}
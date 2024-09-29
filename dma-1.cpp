#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *n=(int *)malloc(sizeof(int));
	if(n==NULL)
	{
		exit(1);
	}
	scanf("%d",n);
	printf("%d",*n);
	free(n);
}
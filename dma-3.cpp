#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *n=(int *)malloc(sizeof(int));    
	scanf("%d",n);
	printf("%d",*n);
	printf("\n");
	int a=sizeof(*n);
	printf("%d",a);
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *d=(*int )realloc(5*sizeof(int));
	printf("%d",sizeof(d));
	return 0;
}
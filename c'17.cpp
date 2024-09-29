#include<stdio.h>
int main()
{
	int x=10,y;
	y=++x + ++x;
	printf("%d",y);
	y=x++ + x++;
	printf("%d",y);
	return 0;
}
#include<stdio.h>
int sum();
int main()
{
	int a,b;
	int c=  sum();
	printf("%d",c);
	return 0;
}
int sum()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=x+y;
	return z;
}
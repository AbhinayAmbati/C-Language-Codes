#include<stdio.h>
int calcSum(int x,int y);
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=calcSum(a,b);
	printf("%d",c);
	return 0;
}
int calcSum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
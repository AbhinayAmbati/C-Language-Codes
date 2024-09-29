#include<stdio.h>
int sum(int x,int y);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int r=sum(x,y);
	printf("%d",r);
	return 0;
}
int sum(int x, int y)
{
	int h=x+y;
	return h;
}
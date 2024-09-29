#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc<2)
	{
		printf("No commands are passed");
	}
	else
	{
		int a=atoi(argv[1]);
		int b=atoi(argv[2]);
		int c= a+b;
		printf("%d",c);
	}
}
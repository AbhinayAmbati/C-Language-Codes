#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
	printf("The no.of arguments passed are: ");
	if(argc<1)
	{
		printf("No arguments passed");
	}
	else
	{
		int a=atoi(argv[1]);
		int b=atoi(argv[2]);
		int rem=a%b;
		printf("%d",rem);
	}
}
#include<stdio.h>
int main(int argc,char *argv[])
{
	printf("The no.of arguments are passed are: ");
	if(argc<1)
	{
		printf("No arguments are passed");
	}
	else
	{
		for(int i=0;i<argc;i++)
		{
			printf("%s",argv[i]);
		}
	}
}
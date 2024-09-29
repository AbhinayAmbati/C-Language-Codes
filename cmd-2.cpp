#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int sum=0;
	printf("No.of arguments supplied are: ");
	if(argc<1)
	printf("No arguments supplied");
	else
	{
		for(int i=0;i<argc;i++)
		{
			sum=sum+atoi(argv[i]);
		}
		printf("%d",sum);
	}
}
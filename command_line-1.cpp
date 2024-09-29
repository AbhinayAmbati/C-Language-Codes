#include<stdio.h>
int main(int argc,char *argv[])
{
	printf("argc is %d\n",argc);
	if(argc>=2)
	{
		printf("The arguments supplied are: ");
		for(int i=0;i<argc;i++)
		{
			printf("%s\t",argv[i]);
		}
	}
}
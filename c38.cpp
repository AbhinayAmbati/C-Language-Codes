#include<stdio.h>
int main(int argc, char* argv[] )
{
	printf("The value of argc is %d",argc);
	if(argc>=2)
	{
		for(int i=0;i<argc;i++)
		{
			printf("The argument at index number %d is %s\n",i,argv[i]);
		}
	}
}
#include<stdio.h>
int main(int argc,char *argv[])
{
	int c=0;
	if(argc<2)
	{
		printf("No commands are passed");
	}
	else
	{
		for(int i=1;i<argc;i++)
		{
			for(int j=0;argv[i][j]!='\0';j++)
			{
				if(argv[i][j]=='a'||argv[i][j]=='i'||argv[i][j]=='e'||argv[i][j]=='o'||argv[i][j]=='u')
		        {
			        c++;
		        }
			}
		}
	}
	printf("%d",c);
}
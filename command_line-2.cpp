#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	printf("argc is %d\n",argc);
	if(argc!=3)
	{
		return -1;
	}
	else
	{
		int a,b,sum;
		a= atoi(argv[1]);
		b= atoi(argv[2]);
		sum=a+b;
		printf("%d",sum);
	}
}
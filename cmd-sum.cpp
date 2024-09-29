#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int sum=0,key,flag=0;
	scanf("%d",&key);
	for(int i=0;i<=argc;i++)
	{
		if(atoi(argv[i])==key)
		flag=1;
	}
	if(flag==1)
	printf("Element found");
	else
	printf("Element not found");
}
#include<stdio.h>
int main()

{
	int a[10],i,key,c=0,cc=-1;
	printf("Enter element into the array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter key");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(key==a[i])
		c++;
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<=key)
		cc++;
	}
	printf("location of key :%d\n",cc);
	if(c==1)
	printf("key found");
	else
	printf("key not found");
	return 0;
	
}
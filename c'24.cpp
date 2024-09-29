#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,num=0;
	scanf("%d",&n);
	int x;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		num=num*10+x;
	}
	num=num+1;
	int len= log10(num)+1;
	int a[len];
	for(i=0;i<len;i++)
	{
		a[i]=num%10;
		num=num/10;
	}
	for(i=len-1;i>0;i--)
	{
		printf("%d,",a[i]);
	}
	printf("%d",a[0]);
	return 0;
}
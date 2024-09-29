#include<stdio.h>
#include<math.h>
int  main()
{
	int n;
	scanf("%d",&n);
	int *a= (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}
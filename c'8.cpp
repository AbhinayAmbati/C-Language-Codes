#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,r,res=0;
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
		r=m%10;
		res=res+r*r*r;
		m=m/10;
	}
	if(res==n)
	printf("Amstrong");
	else
	printf("Not Amstrong");
	return 0;
}
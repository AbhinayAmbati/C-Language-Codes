#include<stdio.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);
	char ch[n];
	scanf("%s",ch);
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='A' && ch[i]<='Z')
		c++;
	}
	printf("%d",c);
	return 0;
}
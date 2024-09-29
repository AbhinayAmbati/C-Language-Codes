#include<stdio.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int c=0;
	for(int i=0;s[i]!='\0';i++)
	{
		c++;
	}
	int left=0;
	int right = c-1;
	while(left<right)
	{
		char temp=s[left];
		s[left]=s[right];
		s[right]=temp;
		printf("%c",s[left]);
		left++;
		right--;
	}
}
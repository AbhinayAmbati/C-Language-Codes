
#include<stdio.h>
int main()
{
	char s[100];
	int c=0;
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		c++;
	}
	int low=0,high=c-1,flag=0;
	char key;
	scanf(" %c",&key);
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(s[mid]==key)
		{
			flag=1;
			break;
		}
		else if(s[mid]>key)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(flag==1)
	{
		printf("Element found");
	}
	else
	{
		printf("Element not found");
	}
}
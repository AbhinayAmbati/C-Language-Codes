#include<stdio.h>

	struct car
	{
		 int chp;
		char cname[10];
		int cmanf;
	}e[5];
	int main()
	{
		int i;
		for(i=0;i<5;i++)
		{
		printf("enter hp :");
		scanf("%d",&e[i].chp);
		printf("enter name :");
		scanf("%s",e[i].cname); 
		printf("enter year of manifacturing :");
		scanf("%d",&e[i].cmanf);
		printf("%d %s %d\n",e[i].chp,e[i].cname,e[i].cmanf);
	}
	
		return 0;
	}
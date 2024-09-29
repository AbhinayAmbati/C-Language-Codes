#include<stdio.h>
struct employee
{
	int eId;
	char eName[50];
	float eSalary;
};
int main()
{
	int n;
	printf("Enter no.of employees information: ");
	scanf("%d",&n);
	struct employee e[n];
	struct employee *p[n];
	for(int i=0;i<n;i++)
	{
		p[i]=&e[i];
		scanf("%d %s %f",&p[i]->eId,p[i]->eName,&p[i]->eSalary);
		printf("%d %s %f",p[i]->eId,p[i]->eName,p[i]->eSalary);
	}
	return 0;
	
}
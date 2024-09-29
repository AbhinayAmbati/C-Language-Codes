#include<stdio.h>
struct student
{
	int sid;
	char sname[50];
	float scgpa;
};
int main()
{
	int n;
	printf("Enter no.of students information");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d %s %f",&s[i].sid,s[i].sname,&s[i].scgpa);
		printf("%d %s %f",s[i].sid,s[i].sname,s[i].scgpa);
	}
}
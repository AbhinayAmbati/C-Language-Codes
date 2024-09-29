#include<stdio.h>
struct student
{
	int sId;
	char sName[10];
	float sCgpa;
}s;
int main()
{
	scanf("%d %s %f",&s.sId,s.sName,&s.sCgpa);
	printf("%d %s %f",s.sId,s.sName,s.sCgpa);
	return 0;
}
#include<stdio.h>
struct student 
{
	int sId;
	char sName[20];
	float sCgpa;
}s={1234,"klu",9.6};
int main()
{
	printf("%d %s %f",s.sId,s.sName,s.sCgpa);
	return 0;
}
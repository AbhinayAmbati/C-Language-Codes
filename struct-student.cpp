#include<stdio.h>
struct student
{
	int sno;
	char name[10];
	float cgpa;
};
int main()
{
	struct student x;
	scanf("%d %s %f",&x.sno,x.name,&x.cgpa);
	printf("%d %s %f",x.sno,x.name,x.cgpa);
}
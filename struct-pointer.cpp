#include<stdio.h>
#include<stdlib.h>
struct emp
{
	int id;
	char name[20];
	char dept[20];
};
int main()
{
	struct emp *p=(struct emp*)malloc(sizeof(struct emp));
	scanf("%d %s %s",p->id,p->name,p->dept);
	scanf("%d %s %s",*p->id,*p->name,*p->dept);
}
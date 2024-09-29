#include<stdio.h>
struct student
{
	int sno;
	char name[10];
	int marks[5];
};
int main()
{
	int n;
	printf("Enter no.of students: ");
	scanf("%d",&n);
	typedef struct student x;
	x s[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d %s %d %d %d %d %d",&s[i].sno,s[i].name,&s[i].marks[0],&s[i].marks[1],&s[i].marks[2],&s[i].marks[3],&s[i].marks[4]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n %s\n %d\n",s[i].sno,s[i].name,s[i].marks);
		float avg=(s[i].marks[0]+s[i].marks[1]+s[i].marks[2]+s[i].marks[3]+s[i].marks[4])/5;
		if(avg>90 && avg<100)
		printf("Grade A");
		else if(avg>80 && avg<89)
		printf("Grade B");
		else if(avg>70 && avg<79)
		printf("Grade C");
		else
		printf("Grade D");
	}
}
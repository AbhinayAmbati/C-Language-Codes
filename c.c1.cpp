#include<stdio.h>
struct student
{
       int id;
       char name;
       float cgpa;
}s={1234,"klu",9.65};
int main()
{
    printf("%d %s %f",s.id,s.name,s.cgpa);
}

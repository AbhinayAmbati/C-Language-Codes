#include<stdio.h>
int i;
void increment(int i)
{
	i++;
}
int main()
{
	for(int i=0;i<10;increment(i));
	printf("i= %d\t",i);
	return 0;
}
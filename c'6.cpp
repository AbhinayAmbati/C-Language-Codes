#include<stdio.h>
int main()
{
	char sName[100];
	scanf("%s",sName);
	long long int sId;
	scanf("%lld",&sId);
	FILE *fptr;
	fptr=fopen("C:\\Desktop\\student.txt","w");
	fprintf(fptr,"%s",sName);
	fprintf(fptr,"lld",sId);
	fclose(fptr);
}
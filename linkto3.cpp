#include<stdio.h>
#include<stdlib.h>
#include "link3.c"
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
       int ele;
       scanf("%d",&ele);
       inesert(ele);
    }
    reverse();
}
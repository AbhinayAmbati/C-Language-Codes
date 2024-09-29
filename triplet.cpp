#include<stdio.h>
int main()
{
    int p=0,q=0;
    int a[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<3;i++)
    {
       if(a[i]>b[i])
       p=p+1;
    }
    for(int i=0;i<3;i++)
    {
        
         if(b[i]>a[i])
       q=q+1;
    }
    printf("%d %d",p,q);
    return 0;
    
}
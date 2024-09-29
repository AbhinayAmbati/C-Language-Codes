#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int gap=n/2;gap>=1;gap=gap/2)
    {
        for(int j=gap;j<n;j++)
        {
            for(int i=j-gap;i>=0;i=i-gap)
            {
                if(a[i+gap]>a[i])
                {
                    break;
                }
                else
                {
                    int temp=a[i+gap];
                    a[i+gap]=a[i];
                    a[i]=temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
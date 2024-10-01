#include<stdio.h>
int main()
{
    int a;
    printf("enter age\n");
    scanf("%d",&a);
    int t;
    printf("enter time \n");
    scanf("%d",&t);
    char s;
    printf("enter seating type \n");
    fflush(stdin);
    scanf("%c",&s);
    char c;
    printf("enter censor certificate \n");
    fflush(stdin);
    scanf("%c",&c);
    if(a>12 && c=='u')
    {
        if(t<17)
        {
            if(s=='s')
            {
                printf("300\n");
            }
            else 
            printf("400\n");
        }
        else 
        {
            if(s=='s')
            {
                printf("400\n");
            }
            else 
            printf("500\n");
        }
        
    }
    else if(a<12 && c=='a')
    {
        printf("CUSTOMER IS NOT ALLOWED\n");
    }
    else if((a>12 && a<18) && c=='a')
    {
        printf("CUSTOMER REOUIRES ADULT COMPANY\n");
        printf("350");
    }
    else if(a>=18 && c=='a')
    {
        printf("600\n");
    }
    return 0;
}

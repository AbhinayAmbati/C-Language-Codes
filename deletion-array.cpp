#include<stdio.h>

int main() 
{
    int a[100], newarray[100];
    int i, delete, n, newsize = 0;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &delete);
    for (i = 0; i < n; i++) 
	{
        if (a[i] != delete) 
		{
            newarray[newsize] = a[i];
            newsize++;
        }
    }
    if (newsize == n) 
	{
        printf("Element not found to delete\n");
    } else {
        for (i = 0; i < newsize; i++) 
		{
            printf("%d ", newarray[i]);
        }
    }
    return 0;
}

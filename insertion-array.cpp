#include <stdio.h>

int main()
{
    int a[100], i, position, value, n;
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
    scanf("%d", &position);
    scanf("%d", &value);
    for (i = n - 1; i >= position - 1; i--)   
	{
        a[i + 1] = a[i];
    }
    a[position - 1] = value;

    for (i = 0; i < n + 1; i++) 
	{
        printf("%d ", a[i]);
    }

    return 0;
}

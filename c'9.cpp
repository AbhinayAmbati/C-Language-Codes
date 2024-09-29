#include <stdio.h> 
int main()
{
   int num;
    printf("Enter a number: "); 
   scanf("%d", &num);
   while (num > 9) 
   { int sum = 0;
   while (num > 0) 
  {    sum += num % 10; num /= 10;}
num = sum;
}
if (num == 1)
 {
printf("It is a magic number.\n");
} 
else 
{
printf("It is not a magic number.\n");
}
return 0;
}

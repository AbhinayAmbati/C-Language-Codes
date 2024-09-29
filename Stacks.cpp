#include<stdio.h>
#define size 10
int stack[size];
int top=-1;
void push(int ele)
{
	if(top==size-1)
	{
		printf("Stack overflow\n");
	}
	else
	{
		top++;
		stack[top]=ele;
	}
}
void pop()
{
	if(top==size-1)
	{
		printf("Stack overflow\n");
	}
	else
	{
		printf("The deleted element is %d",stack[top]);
		top--;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		printf("The peek element is %d",stack[top]);
	}
}
void display()
{
	if(top==-1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		for(int i=0;i<=top;i++)
		{
			printf("%d",stack[i]);
		}
	}
}
int main()
{
	int choice=1,num;
	printf("Stack Menu");
	printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
	scanf("%d",&choice);
	while(choice!=5)
	{
		switch(choice)
		{
			case 1:	
				scanf("%d",&num);
			    push(num);
				break;
				case 2:
					pop();
					break;
					case 3:
						peek();
						break;
						case 4:
							display();
							break;
							case 5:
								break;
								default :
									printf("Enter a valid number\n");
					                break;
		}
	}
	return 0;
}
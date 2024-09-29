#include<stdio.h>
#define size 10
int stack[size];
int top=-1;
void push(int ele)
{
	if(top==size-1)
	{
		printf("Stack overflow");
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
		printf("Stack Overflow");
	}
	else
	{
		printf("The deleted elementv is: ");
		top--;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("Stack underflow");
	}
	else
	{
		printf("The peek element of the stack is: %d",stack[top]);
	}
}
void  display()
{
	if(top==-1)
	{
		printf("Stack underflow");
	}
	else
	{
		for(int i=0;i<top;i++)
		{
			printf("%d",stack[i]);
		}
	}
}
int main()
{
	int choice=1,num;
	printf("Stack menu\n");
	printf("1.push\n2.pop\n3.peek\n4.display\n5.exit");
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
									break;
		}
	}
}
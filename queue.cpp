#include<stdio.h>
#define size 10
int queue[size];
int front =-1,rear=-1;
void enqueue(int value)
{
	if(rear == size-1)
	{
		printf("Queue is full");
	}
	else if(front==-1 && rear==-1)
	{
		front=0,rear=0;
		queue[rear]=value;
	}
	else
	{
		rear++;
		queue[rear]=value;
	}
}
void dequeue()
{
	if((front == -1 && rear == -1)||(front > rear))
	{
		printf("QUEUE UNDER FLOW\n");
	}
	else if(front == size-1)
	{
		printf("Deleted element is %d\n",queue[front]);
		front =-1;
		rear=-1;
	}
	else
	{
		printf("Deleted element is %d\n",queue[front]);
		front++;
	}
}
void display()
{
		if((front==-1 && rear==-1)||(front>rear))
		{
			printf("Under flow\n");
		}
		else
		{
			for(int i=front;i<=rear;i++)
			{
				printf("%d\n",queue[i]);
			}
		}
}
int main()
{
	int num,choice;
	do
    {
        printf("\n****QUEUE MENU****\n");
        printf("1.insert(enqueue)\n2.delete(dequeue)\n3.display\n4.exit");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter any number: ");
            scanf("%d",&num);
            enqueue(num);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            break;
        default:
        printf("INVALID CHOICE\n");
        }
    }while(choice!=4);
	return 0;
}
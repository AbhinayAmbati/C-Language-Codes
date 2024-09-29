#include<stdio.h>
#define size 10
int queue[size];
int front=-1,rear=-1;
void enqueque(int ele)
{
	if(rear==size-1)
	{
		printf("Queue overflow\n");
	}
	else if(rear ==-1 && front==-1)
	{
		front =0;
		rear== 0;
		queue[rear]=ele;
	}
	else
	rear++;
	queue[rear]=ele;
}

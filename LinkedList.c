#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
}*head=NULL;
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void insertAtBegining(int n)
{
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data=n;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		newNode->next=head;
		head=newNode;
	}
}
void insertAtPosition(int n,int pos)
{
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data=n;
	newNode->next=NULL;
	if(pos==1)
	{
		newNode->next=head;
		head=newNode;
	}
	else
	{
		struct node *temp=head;
		for(int i=1;i<pos-1 && temp!=NULL;i++)
		{
			temp=temp->next;
		}
		if(temp==NULL)
		{
			printf("INVALID POSITION!!\n");
		}
		else
		{
			newNode->next=temp->next;
			temp->next=newNode;
		}
	}
}
void insertAtEnd(int n)
{
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data=n;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		struct node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void countNodes()
{
	struct node *temp=head;
	int c=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		c++;
	}
	printf("%d\n",c);
}
int main()
{
	printf("1.InsertAtBegining\n2.InsertAtPosition\n3.InsertAtEnd\n4.Display\n5.Count no.of Nodes\n6.Exit\n");
	int choice,num,pos;
	do
	{
		printf("Choose an option: ");
    	scanf("%d",&choice);
		switch(choice)
	    {
		    case 1:
		    	printf("Enter number: ");
		    	scanf("%d",&num);
		    	insertAtBegining(num);
		    	break;
		    	case 2:
		    		printf("Enter number: ");
		    		scanf("%d",&num);
		    		printf("Enter position: ");
		    		scanf("%d",&pos);
		    		insertAtPosition(num,pos);
		    		break;
		    		case 3:
		    			printf("Enter number: ");
		    			scanf("%d",&num);
		    			insertAtEnd(num);
		    			break;
		    			case 4:
		    				display();
		    				break;
		    				case 5:
		    					countNodes();
		    					break;
		    				case 6:
		    					break;
		    					default :
		    						break;
	    }
	}while(choice!=6);
}

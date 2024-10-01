#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void insertANode(int data)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=data;
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

void countNodes()
{
    struct node*temp=head;
    int c=0;
    while(temp->next!=NULL)
    {
        c++;
        temp=temp->next;
    }
    printf("%d",c);
}

int main()
{
    int n;
    printf("Select choice: \n1.insert\n2.count\n3.exit\n");
    int data;
    scanf("%d",&n);
    do
    {
    switch(n)
        {
            case 1:
                scanf("%d",&data);
                insertANode(data);
                break;
            case 2:
                countNodes();
                break;
            case 3:
                break;
            default :
                break;
        }
    }while(n!=3);
}

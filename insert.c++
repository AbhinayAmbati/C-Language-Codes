#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void count(struct node* head)
{
    int c=0;
    if(head==NULL)
    printf("Node is empty");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        c++;
        ptr=ptr->next;
    }
    printf("%d\n",c);
}
void print(struct node* head)
{
    if(head==NULL)
    printf("Node is empty");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void insertatend(struct node*head,int data)
{
    struct node*ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}
insertatbeg(struct node**head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=*head;
    *head=ptr;
}
int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;
    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=98;
    current->next=NULL ;
    head->next=current;
    insertatbeg(&head,8);
    insertatend(head,67);
    count(head);
    print(head);
}
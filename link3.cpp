#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;

void inesert(ele)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=ele;
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
        newNode->data=ele;
    }
}
void reverse()
{
    struct node *nextNode=head,*prevNode=NULL,*currNode=head;
    while(nextNode!=NULL)
    {
        nextNode=nextNode->next;
        currNode->next=prevNode;
        prevNode=currNode;
        currNode=nextNode;   
    }
    head=prevNode;
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
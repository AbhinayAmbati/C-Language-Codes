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
    printf("%d",c);
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
    count(head);
}
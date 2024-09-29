#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
} * head = NULL;

void insertAtBegining(int ele)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = ele;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd(int ele)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = ele;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtPosition(int ele, int pos)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = ele;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node* temp = head;
        for (int i = 0; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp != NULL)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else
        {
            printf("Invalid position\n");
            free(newNode);
        }
    }
}

void deleteAtBegining()
{
    if (head == NULL)
        printf("No data\n");
    else
    {
        struct node* temp = head;
        temp = temp->next;
        free(temp);
    }
}

void display()
{
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int num, choice, pos;
    printf("\n1.Insert element at begining\n2.Insert element at ending\n3.Insert element at position\n4.Display\n5.Exit\n");

    do
    {
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            insertAtBegining(num);
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            insertAtEnd(num);
            break;
        case 3:
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter a number: ");
            scanf("%d", &num);
            insertAtPosition(num, pos);
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            printf("Invalid choice\n");
            break;
        }

    } while (choice != 5);

    return 0;
}

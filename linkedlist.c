#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
} *head = NULL;

void insertAtBeginning(int ele) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = ele;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd(int ele) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = ele;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtPosition(int ele, int pos) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = ele;
    newNode->next = NULL;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        struct node* temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Invalid position\n");
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

void display() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, num, pos;

    printf("1. Insert element at beginning\n");
    printf("2. Insert element at ending\n");
    printf("3. Insert element at position\n");
    printf("4. Display\n");
    printf("5. Exit\n");

    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                insertAtBeginning(num);
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
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}

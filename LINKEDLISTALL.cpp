/*
Single Linked list
1.Insert at Beginning       
2.Insert at End
3.Insert at Specific     
4.Delete at Beginning     
5.Delete at End
6.Delete Specific data     
7.Display      
8.count of nodes in linked list     
9.Sum of data elements     
10.Maximum_data    
11.Minimum_data    
12.Data_Search
13.Delete at Specific NODE
14.Reverse linked list
15.Display in Reverse order
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert_at_beginning(int value);
void delete_at_beginning();
void display();
void count_node();
void sum_data();
void insert_end(int value);
void data_max();
void data_min();
void delete_end();
void data_search(int value);
void insertion_specific(int value);
void insertion_specific_node(int value);
void delete_specific_ele(int value);
void bubblesort();
void delete_specific_node();
void reverse_lin_list();
void display_rev(struct node *temp);
//void insertion_specific_prev(int value);
//void insertion_specific_next(int value);

int main()
{
    system("cls");
    while(1)
    {
        struct node *temp = head;
        int ch;
        int value;
        printf("\nMenu\n1.Insert at Beginning\n2.Insert at End\n3.Insertion at Specific\n4.Delete at Beginning\n5.Delete at End\n6.Delete specific Element or data\n7.Display\n8.count of nodes in linked list\n9.Sum of data elements\n10.Maximum_data\n11.Minimum_data\n12.Data_Search\n13.Delete at Specific NODE\n14.Bubble Sort\n15.Reverse Linked list\n16.Display in reverse order\n17.Exit\n");
        printf("\nEnter respective number for desired operation : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : printf("Enter value to insert in linked list : ");
            scanf("%d",&value);
            insert_at_beginning(value);
            break;
            case 2 : printf("Enter value to insert in linked list : ");
            scanf("%d",&value);
            insert_end(value);
            break;
            case 3 : printf("Enter value to insert in linked list : ");
            scanf("%d",&value);
            //insert_specific(value);
            insertion_specific_node(value);
            break;
            case 4 : delete_at_beginning();
            break;
            case 5 : delete_end();
            break;
            case 6 : printf("Enter value of data to delete : ");
            scanf("%d",&value);
            delete_specific_ele(value);
            break;
            case 7 : display();
            break;
            case 8 : count_node();
            break;
            case 9 : sum_data();
            break;
            case 10 : data_max();
            break;
            case 11 : data_min();
            break;
            case 12 :  printf("Enter value to search in Linked list : ");
            scanf("%d",&value);
            data_search(value);
            break;
            case 13 : delete_specific_node();
            break;
            /*
            case 14 : bubblesort();
            break;
            */
            case 15 : reverse_lin_list();
            break;

            case 16 : 
            display_rev(temp);
            break;

            case 17 : exit(0);
            default : printf("\nEnter number from Menu-------Try again\n");
        }
    }
}

void insert_at_beginning(int value)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    printf("\n----------------- Value inserted Successfully --------------------\n");
}

void delete_at_beginning()
{
    if(head==NULL)
    {
        printf("\n------------------- List is empty ---------------------\n");
    }
    else
    {
        struct node *temp=head;
        if(head->next==NULL)
        {
            printf("\n---------- NODE Deleted Successfully ----Deleted value is %d -----------\n",head->data);
            head=NULL;
            free(temp);
        }
        else
        {
            head=head->next;
            printf("\n---------- NODE Deleted Successfully ----Deleted value id %d ---------\n",temp->data);
            free(temp);
        }
    }
}

void display()
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("\n--------------- List is Empty ----------------\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void count_node()
{
    if(head==NULL)
    {
        printf("\n------------------- List is Empty -------------------\n");
    }
    else
    {
        struct node *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        printf("\n------------- There are %d nodes in Linked list --------------\n",count);
    }
}

void sum_data()
{
    if(head==NULL)
    {
        printf("\n----------------------- List is Empty -----------------------\n");
    }
    else
    {
        struct node *temp=head;
        int sum=0;
        while(temp!=NULL)
        {
            sum=sum+temp->data;
            temp=temp->next;
        }
        printf("\n----------- Sum of data elements in Linked list is %d --------------\n",sum);
    }
}

void insert_end(int value)
{
    struct node *newnode,*temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->next==NULL)
            {
                temp->next=newnode;
                break;
            }
            temp=temp->next;
        }
    }
    printf("\n-------------------- Value inserted Successfully --------------------\n");
}

void data_max()
{
    if(head==NULL)
    printf("\n------------------- List is Empty --------------------\n");
    else
    {
        struct node *temp=head;
        int n=head->data;
        while(temp!=NULL)
        {
            if(temp->data>n)
            {
                n=temp->data;
            }
            temp=temp->next;
        }
        printf("\n------------------ Maximum value of data element is %d -------------------\n",n);
    }
}

void data_min()
{
    if(head==NULL)
    printf("\n------------------ List is Empty --------------------\n");
    else
    {
        
        int n=head->data;
        struct node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data<n)
            {
                n=temp->data;
            }
            temp=temp->next;
        }
        printf("\n------------------ Minimum value of data element is %d ---------------------\n",n);
    }
}

void delete_end()
{
    if(head==NULL)
    printf("\n------------------ List is Empty --------------------\n");
    else
    {
        struct node *temp1=head;
        if(head->next==NULL)
        {
            printf("\n----------- Node Deleted Successfully ----- Deleted value is %d ------------\n",head->data);
            head=NULL;
            free(temp1);
        }
        else
        {
            struct node *temp2;
            while(temp1!=NULL)
            {
                temp2=temp1->next;
                if(temp2->next==NULL)
                {
                    printf("\n----------- Node Deleted Successfully ----- Deleted value is %d ------------\n",temp2->data);
                    free(temp2);
                    temp1->next=NULL;
                    break;  
                }
                temp1=temp1->next;
            }
        }
    }
}

void data_search(int value)
{
    
    if(head==NULL)
    printf("\n---------------- List is Empty -----------------\n");
    else
    {
        int flag=0,c=0;
        struct node *temp=head;
        while(temp!=NULL)
        {
            c++;
            if(temp->data==value)
            {
                flag=1;
                break;
            }
            temp=temp->next;
        }
        if(flag==1)
        printf("\n-------------- Element or Data found at %d node---------------\n",c);
        else
        printf("\n-------------- Element or Data not found ---------------\n");
    }
}

/*void insertion_specific(int value)
{
    int cho;
    printf("Menu\n1.Insertion using node    2.Insertion using Previous data element    3.Insertion using next data element\n");
    printf("Enter corresponding number for type of insertion u want to execute : ");
    scanf("%d",&cho);
    switch(cho)
    {
        case 1 : insertion_specific_node(value);
        break;

        case 2 : insertion_specific_prev(value);
        break;

        case 3 : insertion_specific_next(value);
        break;

        default : printf("\n--------------- Please enter number from menu --------- Try again -------------\n");
        insertion_specific(value);
    }
}
*/

void insertion_specific_node(int value)
{
    int no;
    printf("Enter number of node in which u want to place data : ");
    scanf("%d",&no);
    struct node *newnode;
    struct node *temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(head == NULL)
    {
        head=newnode;
        printf("\n------------------ Insertion Successfully ------------------\n");
    }
    else if(no==1)
    {
        newnode->next=head;
        head=newnode;
        printf("\n------------------ Insertion Successfully ------------------\n");
    }
    else
    {
        struct node *temp1;
        //struct node *temp2;
        int co=0;
        while(temp!=NULL)
        {
            co++;
            if(co==no-1)
            {
                temp1=temp;
                newnode->next=temp1->next;
                temp1->next=newnode;
                printf("\n------------------ Insertion Successfully ------------------\n");
                break;
            }
            temp=temp->next;
        }
        if(no>co+1)
        {
            printf("\n--------------------- insertion at %d node is not possible -------------------\n",no);
        }
    }
}

/*void insertion_specific_prev(int value)
{
    int ele;
    printf("Enter data value after which u want to insert new data : ");
    scanf("%d",&ele);
    struct node *newnode,*temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        printf("\n------------------ Insertion Successfully ------------------\n");
    }
    else
    {
        int co=0;
        while(temp!=NULL)
        {
            co++;
            if(ele==temp->data)
            {
                newnode->next=temp->next;
                temp->next=newnode;
                break;
            }
            temp=temp->next;
        }
    }
}
*/

void delete_specific_ele(int value)
{
    if(head==NULL)
    {
        printf("\n---------------- List is empty ------------------\n");
    }
    else
    {
        struct node *temp=head;
        struct node *temp1,*temp2;
        while(1)
        {
            int co=0;
            while(temp!=NULL)
            {
                temp1=temp->next;
                if(temp1->data==value)
                {
                    temp2=temp1->next;
                    temp->next=temp2;
                    printf("\n--------- Data deleted Successfully ----Deleted data is %d-------------\n",value);
                    co=1;
                    free(temp1);
                    break;
                }
                temp=temp->next;
            }
            if(co==1)
            break;
            else
            {
                printf("\n-------------------- Element not found in linked list to delete -------------------\n");
                break;
            }
        }
        
    }
}

void delete_specific_node()
{
    if(head==NULL)
    printf("\n--------- List is Empty ----------\n");
    else
    {
        int pos;
        printf("\nEnter position of Node that u want to delete : ");
        scanf("%d",&pos);
        int count=0;
        struct node *temp=head;
        if(pos==1)
        {
            head=temp->next;
            printf("\n------------- Value deleted Successfully ------ Deleted value is %d ---------\n",temp->data);
            free(temp);
        }
        else
        {
            while(temp!=NULL)
            {
                count++;
                if(count+1==pos)
                {
                    if(temp->next!=NULL)
                    {
                        struct node *temp2 = temp->next;
                        temp->next = temp2->next;
                        printf("\n------------- Value Deleted Successfully ------ Deleted Value is %d -----------\n",temp2->data);
                        free(temp2);
                        break;
                    }
                    else
                    {
                        printf("\n----------------- Node NOT Exit --------------------\n");
                    }
                }
                temp=temp->next;
            }
        }
        if(pos > count+1)
        printf("\n----------------- Node NOT Exit --------------------\n");
    }
}

void reverse_lin_list()
{
    struct node *next_node=head , *prev_node=NULL , *cur_node=head;
    if(head == NULL)
    printf("\n ------------------- List is empty ----------------- \n");
    else
    {
        while(next_node!=NULL)
        {
            next_node = next_node->next;
            cur_node->next = prev_node;
            prev_node = cur_node;
            cur_node = next_node;
        }
        head = prev_node;
        printf("\n------------------- List Reversed Successfully  ------------------- \n");
    }
}

void display_rev(struct node *temp)
{
    if(head == NULL)
    printf("\n------------------- List is empty ----------------\n");
    else
    {
        if(temp->next == NULL)
        printf("%d ",temp->data);
        else
        {
            temp = temp->next;
            display_rev(temp);
            printf("%d ",temp->data);
        }
    }
}



/*
//Bubble sort in linked list
void bubblesort()
{
    
    if(head==NULL)
    {
        printf("\n------------------- List is empty -------------------\n");
    }
    else
    {
        while(1)
        {
            if(head->next==NULL)
        {
            
        }
        struct node *temp=head;
        else if(head->next==NULL)
        {
            head==temp;
        }
        else
        {
            while(1)
            {
                else
                {
                    
                }
            }

        }
        
        }
    }
}
*/

#include<stdio.h>
#include<stdlib.h>


struct node{
    int info;
    struct node *link;
};

struct node* start = NULL;

//create ll
void createList()
{
    if(start==NULL)
    {
        int n,i;
        printf("enter the number of nodes");
        scanf("%d",&n);
        if(n!=0)
        {
            int data;
            struct node *newnode;
            struct node *temp;
            newnode = (struct node *)malloc(sizeof(struct node));
            start = newnode;
            temp = start;
            printf("\nenter the number to be inserted");
            scanf("%d",&data);
            start->info=data;
            for(i=2;i<=n;i++)
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                temp->link= newnode;
                printf("Enter the number to be inserted");
                scanf("%d",&data);
                newnode->info = data;
                temp = temp->link;


            }
            temp->link= NULL;
        }
        printf("\nThe list is created");
    }
    else{
        printf("\nThe list is already created");
    }
}

//  traverse ll

void traverse()
{
    struct node *temp;

    if(start == NULL)
        printf("\nThe list is empty");
    else
    {
        temp=start;

        while(temp!= NULL)
        {
            printf("Data = %d\n",temp->info);
            temp=temp->link;
        }
    }

}

void insetAtFront()
{
    int data;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number to be inserted");
    scanf("%d",&data);
    temp->info= data;

    temp->link = start;
    start = temp;

    
}

void insertAtEnd()
{
    int data;
    struct node *temp,*head;
    temp= (struct node *)malloc(sizeof(struct node));
    printf("Enter the number to be inserted");
    scanf("%d",&data);
    temp->link=NULL;
    temp->info= data;
    head = start;
    while(head->link!=NULL)
    {
        head=head->link;

    }

    head->link=temp;

}


//insert at  index
void insertAtPosition()
{
    struct node *temp,*newnode;
    int pos,data,i=1;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter position");
    scanf("%d",&pos);
    printf("\nEnter data");
    scanf("%d",&data);
    temp =  start;
    newnode->info = data;
    newnode->link=NULL;
    while(i<pos-1);
    {
        temp=temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link=newnode;

}

//delete first
void deleteFirst()
{
    struct node *temp;
    if(start == NULL)
    printf("\nThe list is empty\n");
    else
    {
        temp = start;
        start = start->link;
        free(temp);

    }

}

//delete end
void deleteEnd()
{
    struct node *temp, *prevnode;
    if(start==NULL)
    printf("\nThe list is empty");
    else
    {
        temp=start;
        while(temp->link!=NULL)
        {
            prevnode=temp;
            temp=temp->link;
        }
        free(temp);
        prevnode->link=NULL;
    }
}

//delete at index

void deleteAtIndex()
{
    struct node *temp, *head;
    int i=1, pos;
    temp = start;
    if (temp==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        /* code */

    printf("Enter the position you want to delete\n");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->link;
        i++;
    }

        head= temp->link;
        temp->link=head->link;
        free(head);
    }
}

 int main()
{
    createList();
    int choice;
    while(1)
    {
        printf("\n\t1 To see list\n");
        printf("\n\t2 For insertion at"
            " starting\n");
        printf("\n\t3 For insertion at"
            " end\n");
        printf("\n\t4 For deletion of "
            "first element\n");
        printf("\n\t5 For deletion of "
            "last element\n");
        printf("\n\t6 For insertion of "
            "element at n position\n");
        printf("\n\t7 For deletion of "
            "element at n position\n");
        printf("\n\t8 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
    

    switch (choice)
    {
    case 1:
        traverse();
        break;
    case 2:
        insetAtFront();
        break;
    case 3:
        insertAtEnd();
        break;
    case 4:
        deleteFirst();
        break;
    case 5:
        deleteEnd();
        break;
    case 6:
        insertAtPosition();
        break;
    case 7:
        deleteAtIndex();
        break;
    case 8:
        exit(1);
        break;
    default:
        printf("\nIncorrect choice");
    }


}

return 0;
}
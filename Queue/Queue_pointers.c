#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{
    int no;
    struct queue *next;
};

*start=NULL;
void add();
int del();
void traverse();

void main()
{
    int choice;
    while(1)
    {
        printf("\n1. Add");
        printf("\n 2.Delete");
        printf("\n 3.Traverse");
        pritnf("\n 4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
    }
    switch(choice)
    {
    case 1:
        add();
        break;

    case 2:
        printf("The deleted element is \n %d", del());
        break;

    case 3:
        traverse();
        break;

    case 4:
        exit(0);

    default:
        printf("\nInvalid choice");
    }
    getch();
}

void add()
{
    struct queue *p, *temp;
    temp=start;
    p = (struct queue*)malloc(sizeof(struct queue));
    printf("Enter the data");
    scanf("%d",&p->no);
    p->next = NULL;
    if(start == NULL)
        start=p;
    else
    {
        while(temp-> next != NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
    }
}

int del()
{
    struct queue *temp;
    int value;
    if(start ==NULL)
    {
        printf("queue is empty");
        getch();
        return(0);
    }
    else
    {
        temp = start;
        value = temp->no;

        temp = temp -> next;
        free(temp);

    }
    return(value);
}

void traverse()
{
    struct queue *temp;
    temp = start;
    while(temp->next != NULL)
    {
        printf("no = %d",temp->no);
        temp= temp->next;
    }
    printf("no = %d",temp->no);
    getch();
}

































































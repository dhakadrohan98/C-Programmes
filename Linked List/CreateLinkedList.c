#include<stdio.h>
#include<stdlib.h>
struct list
{
  int data;
  struct list *next;
};
typedef struct list node;

void main()
{
    node *head=NULL,*new, *last, *temp;
    int i;
    for(i=1; i<=5; i++)
    {
        puts("Enter data: ");
        new = (node*)malloc(sizeof(node));
        scanf("%d",&new->data);
        new->next=NULL;

        if(head==NULL)
            head=last=new;
        else
        {
            last->next=new;
            last=new;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}

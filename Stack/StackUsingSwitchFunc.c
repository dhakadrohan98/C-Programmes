#include<stdio.h>
int top=-1, item,i,a[5];

void push()
{
    if(top>4)
        printf("Stack is Full\n");
    else
    {
        printf("Item: ");
        scanf("%d",&item);
        top+=1;
        a[top]=item;
    }
}

void pop()
{
    if(top==-1)
        printf("Stack is Empty\n");
    else
    {
        item=a[top];
        printf("Delete of %d\n",item);
        top-=1;
    }
}

void Display()
{
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
       for(i=top; i>=0; i--)
            printf("%d\n",a[i]);
    }
}

void main()
{
    int choice;
    while(1)
    {
        printf("\n1 Push");
        printf("\n2 Pop");
        printf("\n3 Display");
        printf("\n4 Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            Display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid Choice\n");
            //break;
        }
    }
}










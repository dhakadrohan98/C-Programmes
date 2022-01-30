int queue[5],front=-1,rear=-1,item,i;
void Insert();
void Delete();
void Display();

void main()
{
    int choice;
    while(1)
    {
        printf("\n 1. Insertion");
        printf("\n 2. Deletion");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        puts("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            Insert();
            break;

        case 2:
            Delete();
            break;

        case 3:
            Display();
            break;

        case 4:
            exit(0);

        default:
            puts("Invalid choice");
        }
    }
}

void Insert()
{
    if(rear<4)
    {
        puts("Enter Item: ");
        scanf("%d",&item);
        if(front==-1)
        {
            front=rear=0;
        }
        else
            rear+=1;
        queue[rear]=item;
    }
    else
        printf("queue is full");
}

void Delete()
{
    if(front!=-1)
    {
        item=queue[front];
        if(front == rear)
        {
            front=rear=-1;
        }
        else
            front+=1;
        printf("Deleted Item is %d",item);
    }
    else
        puts("queue is empty");
}

void Display()
{
    if(front!=-1)
      for(i=front; i<=rear; i++)
         printf("%d\n",queue[i]);
    else
            puts("Queue is empty");

}





















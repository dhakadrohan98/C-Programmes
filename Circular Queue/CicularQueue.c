#define MAXSIZE 5
int cq[10], front=-1, rear=-1, choice, item, i;
void insert();
void delete();
void display();

main()
{
    while(1)
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice");
        }
    }
}

void insert()
{
    if( front == (rear+1) % MAXSIZE )
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter the element to be inserted: ");
        scanf("%d",&item);
        if(front==-1) {
            front=rear=0;
            cq[rear]=item;   }
        else
        {
            rear = (rear+1)%MAXSIZE;
            cq[rear]=item;
        }
    }
}

void delete()
{
    if(front == -1)
        printf("Queue is Empty");
    else
    {
      item=cq[front];
      printf("Deleted element is = %d\n",cq[front]);
      if(front == rear)
            front=rear=-1;
      else
        front = (front+1)%MAXSIZE;
    }
}

void display()
{
    if(front==-1)
        printf("Queue is empty\n");
    else
    {
        printf("\nThe status of the queue");
        for(i=front; i<=rear; i++)
            printf("\n%d", cq[i]);
    }

    if(front>rear)
    {
        for(i=front; i<MAXSIZE; i++)
            printf("%d ",cq[i]);

        for(i=0; i<=rear; i++)
            printf("%d ",cq[i]);

    }
    printf("\n");
}















#define size 5
void En_queue(int *arr, int data, int *front, int *rear);
int De_queue(int *arr, int *front, int *rear);
int isEmpty(int front);
int isFull(int front, int rear);

int main()
{
    int array[size], front, rear, value, choice;
    front=rear= -1;
    while(1)
    {
        printf("\n\n 1. En-queue");
        printf("\n 2. De-queue");
        printf("\n 3. De-queue entire queue");
        printf("\n 4. exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            value = isFull(front, rear);
            if(value==1)
            {
                printf("Enter value to be en-queued: ");
                scanf("%d",&value);
                En_queue(array, value, &front, &rear);
            }
            else
            {
                printf("error: queue overflow");
            }
            break;

        case 2:
        {


            value=isEmpty(front);
            if(value==1)
            {
                value= De_queue(array, &front, &rear);
                printf("\n De-queued value = %d",value);
            }
            else
                printf("\n error: queue underflow");
            break;
        }

        case 3:
            value = isEmpty(front);
            if(value==1)
            {
                printf("\n Queue Elements: ");
                while(front>-1)
                {
                    value= De_queue(array, &front, &rear);
                    printf("\n %d",value);
                }
            }
            else
                printf("error: queue underflow");
            break;

        case 4:
            exit(0);

        default:
            printf("\nInvalid choice");
        }
    }
    getch();
}

void En_queue(int *arr, int data, int *front, int *rear)
{
    if(*rear == size-1)
        *rear=0;
    else
    {
        (*rear)++;
        arr[*rear] = data;
        if(*front == -1)
            *front = 0;
    }
}

int De_queue(int *arr, int *front, int *rear)
{
    int data = arr[*front];
    if(*front == *rear)
        *front= *rear= -1;
    else
    {
        if(*front== size-1)
           *front = 0;
        else
        {
            (*front)++;
        }
    }
    return(data);
}

int isEmpty(int front)
{
    if(front == -1)
        return(0);
    else
        return(1);
}

int isFull(int front, int rear)
{
    if( (front == 0 && rear==size-1) || (front == rear+1) )
        return(0);
    else
        return(1);
}



















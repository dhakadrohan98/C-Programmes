// Stack is Implemented as Array...
struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};

struct ArrayStack* createStack(int cap)
{
    struct ArrayStack *stack;
    stack=malloc(sizeof(struct ArrayStack));
    stack->capacity=cap;
    stack->top=-1;
    stack->array=malloc(sizeof(int) * stack->capacity);
    return(stack);
}

int isFull(struct ArrayStack *stack)
{
    if(stack->top == stack->capacity-1)
        return(1);
    else
        return(0);
}

int isEmpty(struct ArrayStack *stack)
{
    if(stack->top==-1)
        return(1);
    else
        return(0);
}

void push(struct ArrayStack *stack, int item)
{
    if( !isFull(stack) )
    {
        stack->top++;
        stack->array[stack->top]=item;
    }
}

int pop(struct ArrayStack *stack)
{
    int item;
    if( !isEmpty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
        return(item);
    }
    else
       return(-1);
}

main()
{
    struct ArrayStack *stack;
    int choice,item,n;
    printf("Size of stack:");
    scanf("%d",&n);
    stack=createStack(n);
    while(1)
    {
        printf("\n1 push");
        printf("\n2 pop");
        printf("\n3 Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter a Number:");
                scanf("%d",&item);
                push(stack,item);
                break;

            case 2:
                item=pop(stack);
                if(item==-1)
                    printf("Stack is Empty");
                else
                    printf("poped value is %d\n",item);
                break;

            case 3:
                exit(0);
        }
    }
}


















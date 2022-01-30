struct node
{
    int info,Null;
    struct node *link;
    struct node *START=NULL;
};

struct node* createNode()
{
   struct node *n;
   n=(struct node*)malloc(sizeof(struct node));
   return(n);
}

void insertNode()
{
    struct node *temp;
    temp=createNode();
    printf("Enter a number:");
    scanf("%d",&temp->info);
    temp->NULL;
    if(START==NULL)
        START=temp;
    else
    {
        t=START;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
    printf("Inserted Node: %d",t->link);
}

main()
{
    struct node *START=NULL;
    insertNode();

}

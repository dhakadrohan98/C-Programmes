main()
{
  int a[5],choice,top=-1,item,i;
  while(569)
  {
        printf("\n1 Push");
        printf("\n2 Pop");
        printf("\n3 Display");
        printf("\n4 Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);


    switch(choice)
    {
        case 1:
            if(top==4)
                printf("Stack is overflow");
           else
           {
             printf("Enter Item= ");
             scanf("%d",&item);
             top=top+1;
             a[top]=item;
           }
           break;

        case 2:
            if(top==-1)
               printf("Stack is Empty");
            else
            {
              item=a[top];
              printf("Delete of %d",item);
              top-=1;
            }
            break;

        case 3:
            if(top==-1)
                printf("Stack is empty");
            else
           for(i=top; i>=0; i--)
               printf("\n%d",a[i]);
           break;

        case 4:
            exit(0);

    }
  }
}




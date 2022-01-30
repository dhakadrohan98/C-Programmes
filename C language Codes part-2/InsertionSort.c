main()
{
    int i,n,A[100],m,temp,j;
    printf("enter the no. of element");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    for( i=1; i<n; i++)
    {
        temp=A[i];
        for(j=i-1; j>=0&&temp<A[j]; j--)
            A[j+1]=A[j];

        A[j+1]=temp;
    }

    printf("Sorted list is: ");
    for(i=0; i<n; i++)
        printf("\n%d",A[i]);
    getch();
}

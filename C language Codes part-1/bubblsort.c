void bubble_sort(int A[], int n)
{
    int r,i,t;
    for( r=1; r<=n-1; r++)
        for( i=0; i<=n-1-r; i++)
          if( A[i]>A[i+1])
    {
        t=A[i];
        A[i]=A[i+1];
        A[i+1]=t;
    }
}

main()
{
    int A[10];
    int n,i,j;
    printf("enter a no: ");
    scanf("%d",&n);
    for( i=1; i<=n; i++)
      scanf("%d",&A[i]);
    bubble_sort(A,n);
    for( j=0; j<=n-1; j++)
        printf(" %d",A[i]);
    getch();
}

main()
{
    int i,n,l,h,mid,A[100],item;
    printf("enter the number of element: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%d",&A[i]);

    printf("enter the element that you want to search: ");
    scanf("%d",&item);

    l=0;
    h=n-1;

    while(l<=h)
    {
        mid=(l+h)/2;

        if(A[mid]==item)
            printf("\nLOC = %d",mid+1);

        if( A[mid]>item )
            h=mid-1;
        else
            l=mid+1;
    }
    getch();
}

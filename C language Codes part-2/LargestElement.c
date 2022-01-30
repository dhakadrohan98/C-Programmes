main()
{
    int a[10],i,m,n,swap;
    printf("enter size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    m=a[0];
    for(i=0; i<n; i++)
    if(m<a[i])
    {
        swap=m;
        m=a[i];
        a[i]=swap;
    }
    printf("largest element: %d",m);
    getch();
}

main()
{
    int n,div,i=0,a[20],p;
    printf("enter a no: ");
    scanf("%d",&n);
    div=n/2;
    a[i]=n%2;

    do
    {
        i++;
        a[i]=div%2;
        div=div/2;
    }
    while(div/2!=0);
    p=i+1;
    a[p]=div%2;

    printf("Binary Coversion: ");

    for(i=p; i>=0; i--)
        printf("\t%d",a[i]);
    getch();
}

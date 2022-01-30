int* r(int* b,int n)
{
    //int *count=n;
    static int a[5];
    int i;
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    return a;
}

main()
{
    int b[5],i;
    int n=5;
    int* c=r(b,n);
    for(i=0; i<5; i++)
        printf("%d ",c[i]);
    getch();
}

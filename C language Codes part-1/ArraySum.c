int sum(int a[],int n)
{
    int s=0,i;
    for(i=0; i<n; i++)
      s=s+a[i];
    return s;
}

main()
{
    int a[10],i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("%d",sum(a,n));
    getch();
}

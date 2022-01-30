void main()
{
    int a[5],i,n,d;
    scanf("%d %d",&n,&d);
    printf("%d",d);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        a[i] = a[(i+d)%n];
        printf("%d ",a[i]);
    }

}

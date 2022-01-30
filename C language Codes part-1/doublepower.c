int power(int m,int n)
{
    int p=1,i;
    for(i=1; i<=n; i++)
    {
        p=p*m;
    }
    return (p);
}

main()
{
    int a,b,c,x,y;
    printf("enter 3no: ");
    scanf("%d\t%d\t%d",&a,&b,&c);
    y=power(b,c);
    x=power(a,y);
    printf("result=%d",x);
    getch();

}

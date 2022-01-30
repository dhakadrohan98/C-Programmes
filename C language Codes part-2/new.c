int* r()
{
    static int a[3]={1,2,3};
    static int b[3]={2,1,5};
    int i;
    int count=3;
    a[i]=0,b[i]=0;
    while(i!=3)
    {
        if(a[i]>b[i])
            a[i]=a[i]+1;
        if(a[i]<b[i])
            b[i]=b[i]+1;
        i++;
    }

    return (a[i-1],b[i-1]);

}

main()
{
    int *p;
    p=r();
    printf("%d %d",p[0],p[1]);
    getch();
}

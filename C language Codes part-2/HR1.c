int c (int a[],int b[])
{
    int i,c1[3],c2[3];
    for(i=0; i<3; i++)
    {
       if(a[i]>b[i])
            c1[i]=c1[i]+1;;
       if(a[i]<b[i])
        c2[i]=c2[i]+1;
    }
    return (c1[3],c2[3]);
}

main()
{
    int a[100],b[100],i;
    printf("enter values for a: ");
    for(i=0; i<=2; i++)
        scanf("%d ",&a[i]);

    printf("enter values for b: ");
    for(i=0; i<3; i++)
        scanf("%d ",&b[i]);

    printf("result = %d",c(a,b));
    getch();
}

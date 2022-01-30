float fact(n)
{
   float f=1;
   int i;
   for(i=1;i<=n;i=i+1)
        f=f*i;
   return(f);
}

float s3(int n)
{
    float g=0;
    int i;
    for(i=1; i<=n; i++)
        g=g+(1/fact(i));
    return(g);
}


main()
{
    int n;
    printf("enter a no\n");
    scanf("%d",&n);
    printf("3rd series = %f",s3(n));
    getch();
}

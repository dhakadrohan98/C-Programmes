int GCD(int a, int b)
{
    if(a==b)
        return(b);
    if(a%b==0)
        return(b);
    if(b%a==0)
        return(a);
    if(a>b)
        return(GCD(a%b,b));
    else
        return(GCD(b%a,a));
}

main()
{
    int a,b;
    printf("Enter two Number: ");
    scanf("%d\n%d",&a,&b);
    printf("GCD = %d",GCD(a,b));
}

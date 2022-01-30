fact(int n)
{
    if(n<=1)
        return(1);
    else
        return n+fact(n-1);
}
main()
{
    int p;
    printf("enter a number");
    scanf("%d",&p);
    printf("%d",fact(p));
    getch();
}

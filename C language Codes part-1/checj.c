main()
{
    int n;
    scanf("%d",&n);
    if(n>=1&&n<=100)
        printf("%d",n);
    else
    {
        while(n<=1||n>=100)
        {
            printf("Again enter size of 1st array such that (1<= m <=100): ");
            scanf("%d",&n);
        }
    }
    printf("\n%d",n);
}

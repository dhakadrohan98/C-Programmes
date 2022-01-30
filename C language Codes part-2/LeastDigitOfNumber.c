main()
{
    int n,s;         printf("Enter a Number:");
    scanf("%d",&n);
    s=n%10;
   // printf("s = %d",s);
    n=n/10;
    while(n!=0)
    {
        //n=n/10;
        //printf("\nn = %d",n);
        if(s>n%10)
        {
            s=n%10;
        }
        n=n/10;
    }
    printf("\nLeast Digit = %d",s);
}

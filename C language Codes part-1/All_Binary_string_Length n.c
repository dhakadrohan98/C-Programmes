void bin(int n,char A[])
{
    if(n<1)
        printf("\n%s",A);
    else
    {
        A[n-1]='0';
        bin(n-1,A);
        A[n-1]='1';
        bin(n-1,A);
    }
}

main()
{
    int n;
    printf("Enter length of Binary string:");
    scanf("%d",&n);
    char A[n+1];
    A[n]='\0';
    bin(n,A);
}

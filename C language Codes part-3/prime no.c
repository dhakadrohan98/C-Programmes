main()
{
    int n,i,count;
    printf("enter a no ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
      if(n%i==0)
      {
        count=count+1;
      }
    }
    if(count==2)
        printf("prime no");
    else
        printf("not prime no");
    getch();
}

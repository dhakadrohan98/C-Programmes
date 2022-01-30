int prime(int a,int b)
{
    int i,j,count=0;
    for(i=a+1; i<b; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {count++;}
            if(count==2)
            {
              printf("\n%d",i);
            }
        }
    }
}

main()
{
    int a,b,c=0,i;
    scanf("%d %d",&a,&b);
    c=prime(a,b);
    getch();
}

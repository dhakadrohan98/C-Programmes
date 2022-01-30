main()
{
    int N,n,i;
    float sum=0,avg=0;
    printf("enter a no");
    scanf("%d",&N);

    for( i=1; i<=N; i++)
    {
        printf("enter a number %d:-",i);
        scanf("%d",&n);
        sum=sum+n;
    }
    avg=sum/N;
    printf("\navg = %f",avg);
    getch();
}

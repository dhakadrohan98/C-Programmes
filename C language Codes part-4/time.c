struct time
{
    int hrs;
    int min;
    int sec;
}t1,t2,t3;

main()
{
    printf("Enter 1st time: ");
    scanf("%d\t\t%d\t\t%d",&t1.hrs,&t1.min,&t1.sec);

    printf("Enter 2nd time: ");
    scanf("%d\t\t%d\t\t%d",&t2.hrs,&t2.min,&t2.sec);

    t3.sec=t1.sec+t2.sec;
    t3.min=t1.min+t2.min+(t3.sec/60);
    t3.hrs=t1.hrs+t2.hrs+(t3.min/60);

    t3.sec=t3.sec%60;
    t3.min=t3.min%60;

    printf("new time: hrs=%d min=%d sec=%d",t3.hrs,t3.min,t3.sec);
    getch();
}

main()
{
    int n,r1=0,r2=0,r3=0;
    scanf("%d",&n);
    r2=n-1;
    printf("Disk %d moved from r%d to r2\n",r2,r2);
    r3=n;
    printf("Disk %d moved from r%d to r3\n",r3,r3);
    r3=(n-1)+n;
     printf("Disk %d moved from r%d to r3",n-1,n);
}

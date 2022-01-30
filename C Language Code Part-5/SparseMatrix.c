void main()
{
    int a[10][10];
    int i,j,m,n,count=0;
    printf("enter the order of matrix: ");
    scanf("%d\t%d",&m,&n);
    printf("enter the element of matrix: ");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)  {
        if(a[i][j]==0)
        count++;   }
    }
    printf("Matrix is:\n");
    for(i=0; i<m; i++)    {
        for(j=0; j<n; j++)
            printf("%d\t",a[i][j]);
    printf("\n");    }

    if(count>((m*n)/2))
    {
        printf("\ngiven matrix is sparse matrix\n");
    }
    else
        printf("\ngiven matrix is not sparse matrix\n");

    printf("\nthere are %d number of zeros",count);

}

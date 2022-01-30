main()
{
    int a[10][10],i,j,m,n;
    printf("Enter the number of row & columns of matrix: ");
    scanf("%d\t%d",&m,&n);
    printf("\nenter the element one by one:\n");

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
           scanf("%d",&a[i][j]);

    printf("\nthe given matrix:\n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++) {
            printf("%d\t",a[i][j]);
            if(j==n-1)
                printf("\n");  }

    printf("\nThe Trans;pose of matrix:\n");
        for(i=0; i<m; i++)
          for(j=0; j<n; j++) {
            printf("%d\t",a[j][i]);
            if(j==n-1)
                printf("\n");   }

}

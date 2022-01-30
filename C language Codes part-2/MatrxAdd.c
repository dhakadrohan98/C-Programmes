main()
{
    int a[10][10],b[10][10],i,j,k,l;
    printf("enter elements of 1st matrix: ");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
           scanf("\n%d",&a[i][j]);

    printf("enter elements of 2nd matrix: ");
    for(i=0; i<3; i++)
       for(j=0; j<3; j++)
          scanf("\n%d",&b[i][j]);

    for(i=0; i<3; i++)
       for(j=0; j<3; j++)
          a[i][j]=a[i][j]+b[i][j];

    printf("Add: ");
    for(i=0; i<3; i++)
       for(j=0; j<3; j++)
          printf("\n%d",a[i][j]);

    getch();
}

#include<stdio.h>
main()
{
    int i,j,r,c,A[10][10],B[10][10];
    printf("enter two number\n");
    scanf("%d\t%d",&r,&c);
    printf("enter numbers for 1st matrix\n");
    for(i=0; i<r;i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&A[i][j]);
    }

    printf("enter number for 2nd matrix\n");
    for(i=0; i<r;i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&B[i][j]);
    }

    printf("Addition of two matrices\n");
    for(i=0; i<r; i++)
    {
        for(j=0; i<c; j++)
        {
            printf("%d\t",A[i][j]+B[i][j]);
        }
        printf("\n");
    }
    getch();
}

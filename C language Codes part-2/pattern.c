#include<stdio.h>
#include<conio.h>
main()
{
    int space, rows, i,j,k;
    printf("enter no. of rows");
    scanf("%d",&rows);
    space=rows-1;

    for(i=1; i<=rows; i++)
    {
        for( space=1; space<=(rows-i); space++)
            printf("  ");

        for(j=1;j<=i;j++)
            printf("%d",j);

        for(k=(i-1); k>=1; k--)
            printf("%d",k);

        printf("\n");
    }
    getch();
}

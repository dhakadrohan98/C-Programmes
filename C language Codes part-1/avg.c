#include <stdio.h>
#include<conio.h>
main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=rows; i>=1; i=i-1)
    {
        for(j=1; j<=i; j=j+1)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}

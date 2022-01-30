#include<stdio.h>
main()
{
    char s[3][10];
    int i;
    printf("enter three strings\n");

    for( i=0; i<=2; i++)
        gets(&s[i][0]);

    for( i=0; i<=2; i++)
        printf("%s\n",s[i]);
    getch();
}

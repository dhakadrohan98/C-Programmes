#include<stdio.h>
main()
{
    /*char str= "abcdef"[2];
    printf("str = %c",str);*/

    char *p = "Taj Mahal";
    int i;

    printf("addresses:\n");
    for(i=0; i<9; i++)
        printf("(p+%d) = %d\n",i,&p[i]);

    printf("\nValues:\n");
    for(i=0; i<9; i++)
        printf("*(p+%d) = %c\n",i,p[i]);
}

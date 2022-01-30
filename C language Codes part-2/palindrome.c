#include<stdio.h>
main()
{
    char str[20];
    int i,l;
    printf("enter a string: ");
    gets(str);
    l=strlen(str);

    for(i=0; i<l/2; i++)
    {
        if(str[i]!=str[l-1-i])
        {
           printf("not pelindrome");
           break;
        }
    }

    if(i==l/2)
        printf("pelindrome");
    getch();
}

#include<stdio.h>
main()
{
    int i=4,j;
    double d=4.0,f;
    char s[]={"HackerRank"};
    char t[100];
    //printf("enter j= ");
    scanf("%d",&j);
    //printf("\n");
    scanf("%lf",&f);
    //printf("\n");
    //printf("\n\n");
    //fgets(t,l,stdin);
    gets(t);
    printf("%d\n",i+j);
    printf("%0.1f\n",d+f);
    //Concatenate Two Strings With Using strcat() fuction*
    strcat(s,t);
    printf("%s", s);
    getch();
}


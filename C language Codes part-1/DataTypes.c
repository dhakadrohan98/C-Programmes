#include<stdio.h>
main()
{
    int i=4,j,k,l;
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
    //Concatenate Two Strings Without Using strcat()
    for(k = 0; s[k] != '\0'; ++k);

    for(l = 0; t[l] != '\0'; ++l, ++k)
    {
        s[k] = t[l];
    }

    s[k] = '\0';
    printf("%s", s);
    getch();
}

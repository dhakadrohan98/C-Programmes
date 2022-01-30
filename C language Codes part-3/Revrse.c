main()
{
    char s1[100],s2[100];
    int i,l;
    gets(s1);
    l=strlen(s1);
    /*s1[l]='\0';*/
    for(i=0;s1[i]!='\0';i++)
        s2[i]=s1[l-1-i];
    s2[i]='\0';
    puts(s2);
    getch();
}

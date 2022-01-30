main()
{
    char s1[10],s2[10];
    int i,l;
    gets(s1);
    l=strlen(s1);
    s1[l]='\0';
    for(i=0;s1[i]!='\0';i++)
        s2[i]=s1[l-1-i];
    s2[i+1]='\0';
    puts(s2);
    getch();
}

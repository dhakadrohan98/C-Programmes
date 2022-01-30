main()
{
    static char s[15],i;
    puts("enter a string: ");
    gets(s);
    puts("revers:");
    for(i=15; i>=0; i--)
        printf("%c",s[i]);
    getch();
}

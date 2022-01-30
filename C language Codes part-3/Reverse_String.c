main()
{
    char s[100],temp[100],i,n=0,j;
    printf("enetr a string: ");

    gets(s);
    while(s[n]!='\0') n++;

    s[n]='\0';
    j=n-1;
    for(i=0;s[i]!='\0'; i++)
    {
        temp[j]=s[i];
        j=j-1;
    }
    temp[i]='\0';
    puts(temp);

    getch();
}

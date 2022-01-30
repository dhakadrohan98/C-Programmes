main()
{
    char s[100],i,n,j,round,swap;
    printf("size: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
       {
           scanf("%c",&s[i]);
       }
    for(round=0; round<n-1; round++)
      {

       for(j=0; j<n-1-round; j++)
        {
          if(s[j]>s[j+1])
          {
              swap=s[j];
              s[j]=s[j+1];
              s[j+1]=swap;
          }
        }
      }

    printf("sorted list: ");
    for(i=0; i<n; i++)
        printf("%d",s[i]);

    getch();
}

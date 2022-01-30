void swap(char *x, char *y);
void permutation(char *s,int i,int n);
void swap(char *x, char *y)
{
    char ch;
    ch=*x;
    *x=*y;
    *y=ch;
}

void permutation(char *s,int i,int n)
{
    static int count;
    int j;
    if(i==n)
    {
        count++;
        printf("(%d)%s\n",count,s);
    }
    else
        for(j=i;j<=n;j++)
    {
      swap((s+i),(s+j));
      permutation(s,i+1,n);
      swap((s+i),(s+j));// Backtracking
    }
}

main()
{
    char str[15];
    printf("Enter a String:");
    gets(str);
    //str=name;
    //printf("\n base add= %d",str);

    //printf("\n l = %d",l);
    permutation(str,0,strlen(str)-1);
}






















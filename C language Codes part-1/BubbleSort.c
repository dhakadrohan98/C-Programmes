void bubble_sort(int A[], int N)
{
    int r,i,t;
    for( r=1; r<=N-1; r++)
        for( i=0; i<=N-1-r; i++)
          if( A[i]>A[i+1])
    {
        t=A[i];
        A[i]=A[i+1];
        A[i+1]=t;
    }
}

main()
{
    int A[]={ 34,15,29,8,65,89,2,3,63};
    int i;
    bubble_sort(A,9);
    for(i=0;i<=8;i++)
        printf(" %d",A[i]);
    getch();
}

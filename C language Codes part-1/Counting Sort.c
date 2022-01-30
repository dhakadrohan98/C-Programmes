void countsort(int A[], int N, int B[], int K)
{
    int i,j,c[K];

    for(i=0; i<K; i++)
        c[i]=0;

    for(j=0; j<N; j++)
       c[A[j]] = c[A[j]]+1;

    for(i=1; i<K; i++)
        c[i] = c[i]+c[i-1];

    //for(j=N ; j>=0; j--)
    for(j=0 ; j<N; j++)
    {
        B[c[A[j]]-1] = A[j];
        c[A[j]] = c[A[j]]-1;
    }
}

main()
{
    int A[] = {5,9,4,5,3,6,8,5,4,8,7,4,6,9,7};
    int B[15], K=10, N=15, i;
    countsort(A,N,B,K);

    for(i=0; i<N; i++)
        printf(" %d",B[i]);

}


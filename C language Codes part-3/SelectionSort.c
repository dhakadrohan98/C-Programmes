int min( int A[], int k, int N)
{
    int j,LOC,MIN;
    MIN=A[k];
    LOC=k;
    for(j=k+1; j<=N-1; j++)
        if(MIN>A[j])
        {
            MIN=A[j];
            LOC=j;
        }
        return (LOC);
}

int main()
{
    int A[]={33,11,66,88,99,77,44,55,22,1};
    int LOC,k,temp;
    for(k=0; k<=8; k++)
    {
        LOC=min(A,k,10);
        temp=A[k];
        A[k]=A[LOC];
        A[LOC]=temp;
    }

    for(k=0; k<=9; k++)
        printf(" %d",A[k]);
    getch();
}

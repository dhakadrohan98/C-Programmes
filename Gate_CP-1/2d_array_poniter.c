void main()
{
    int a[3][4] = {{10,11,12,13}, {20,21,22,23},{30,31,32,33} };
    int *pa[3],i,j;

    for(i=0; i<3; i++)
        pa[i]=a[i];

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("pa[%d][%d] = %d\t",i,j,pa[i][j]);
        }
        printf("\n");
    }
}

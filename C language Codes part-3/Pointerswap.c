void swap (int *p, int *q);
void main()
{
    int a,b;
    printf("Enter two no");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    getch();
}

void swap (int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("a= %d\nb= %d",*p,*q);
}


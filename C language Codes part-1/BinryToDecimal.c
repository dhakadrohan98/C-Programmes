#include<math.h>
main()
{
    int i=0,s=0;
    long int n;
    printf("enter a no: ");
    scanf("%lld",&n);

    while(n!=0)
    {
        s=s+pow(2,i)*(n%10);
        n=n/10;
        i++;
    }

    printf("Decimal no: %lld",s);
    getch();
}

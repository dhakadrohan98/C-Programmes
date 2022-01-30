#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal(long long n);

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));
    return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

/*int power(int m,int n)
{
 int p=1,i;
 for(i=0; i<=n; i++)
        p=p*m;

 return (p);
}

main()
{
  int n,i=0,a[20],b[20],q;
  scanf("%d",&n);
  a[0]=1;
  while(a[i]<n)
  {
      i++;
      a[i]=power(2,i+1);
  }
  q=i;
  for(i=q; i>=0; i--)
    printf("\t%d",a[i]);
}*/

#include <iostream>
using namespace std;
int main()
{
  int a[3],b[3],c[2],a1,b1,i;
  a1=b1=0;

  for(i=0;i<3;i++) cin>>a[i];
  for(i=0;i<3;i++) cin>>b[i];

  for(i=0;i<3;i++)
  {
    if(a[i]>b[i]) a1++;
    else if(b[i]>a[i]) b1++;
  }
  c[0]=a1;
  c[1]=b1;
  cout<<c[0]<<" "<<c[1];
  return 0;
}

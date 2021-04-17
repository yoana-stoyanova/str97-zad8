//Програмата извежда а на n-та степен
#include <iostream>
using namespace std;
int main()
{
   int n;
   double a;
   int br;

   cout<<"n="; cin>>n;
   cout<<"a="; cin>>a;

   double j=a;

  if(n==0){cout<<1;}
  if(n==1){cout<<a;}
  if(n>=2)
  {
    for(br=2; br<=n; br++)
   {
    a=a*j;
   }

   cout<<a;
  }

    return 0;
}

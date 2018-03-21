#include<bits/stdc++.h>
using namespace std;
int bigmod(int a,int b,int m)
{
  if(n==0) return 1;
  else if(n%2==0)
    return bigmod((x*x)%m,n/2,m);
 else return (x*bigmod((x*x)%m,(n-1)/2,m))%m;
}
int main()
{
  cout<<bigmod(2,4,5);
  return 0;
}

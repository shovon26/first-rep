#include<bits/stdc++.h>
using namespace std;
int bigmod(int a,int b,int m)
{
  int ans=1;
  while(b)
  {
    if(b&1)
    {
      ans=(ans*a)%m;
    }
      b>>=1;
      a=(a*a)%m;
  }
  return ans%m;
}
int main()
{
  cout<<bigmod(2,4,5);
  return 0;
}

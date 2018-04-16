#include<bits/stdc++.h>
using namespace std;
void substring()
{
  string s,p;
  int i,j,k,l,pos;
  cin>>s;
  cin>>pos>>l;

  for(i=pos;i<pos+l;i++) cout<<s[i];

}
void substring1() //using c++ builtin function
{
  string s,p;
  int i,j,k,l,pos;
  cin>>s;
  cin>>pos>>l;

  p=s.substr(pos,l);

   cout<<p;
}

void insertion() //using c++ builtin function
{
  string s,p;
  int i,j,k,l,pos;
  cin>>s>>p;
  cin>>pos;

  s.insert(pos,p);

  cout<<s;
}
void insertion1() //another way of c++ builtin function
{
  string s,pat,p,q;
  int i,j,k,l,pos;
  cin>>s>>pat;
  cin>>pos;
  l=s.size();
  p=s.substr(0,pos);
  q=s.substr(pos,l-pos);

  cout<<p+pat+q;
}

void deletion() //using c++ builtin function
{
  string s,pat,p,q;
  int i,j,k,l,len,pos;
  cin>>s;
  cin>>pos>>len;
    l=s.size();
   p=s.substr(0,pos);
   q=s.substr((pos+len),l-(pos+len));

   cout<<p+q;
}
int main()
{
  substring();
  insertion();
  substring1();
  insertion1();
  deletion();
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{

  pair<int,string>p;

  p.first=10;
  p.second="Shovon";

  cout<<p.first<<" "<<p.second<<endl;

  p=make_pair(20,"a");

   cout<<p.first<<" "<<p.second<<endl;
   int a,b;
   cin>>a>>b;

  pair<int , int >p1(a,b);

  cout<<p1.first<<" "<<p1.second<<endl;

  pair<int,int>p2(p1);//copy a pair into another variable

  cout<<p2.first<<" "<<p2.second<<endl;

  pair<string, pair<int,char> >student;

  student=make_pair("Shovon Khan", make_pair(384,'A'));

  cout<<student.first<<" "<<student.second.first<<" "<<student.second.second<<endl;


  pair<string, pair<int,char> >stu[100];

  for(int i=0;i<1;i++)
  {
    stu[0]=make_pair("Shovon",make_pair(384,'A'));
    stu[1]=make_pair("Murad",make_pair(385,'A'));
    stu[2]=make_pair("Asif",make_pair(386,'A'));

  }
  for(int i=0;i<1;i++)
  {
    cout<<stu[0].first<<" "<<stu[0].second.first<<" "<<stu[0].second.second<<endl;
    cout<<stu[1].first<<" "<<stu[1].second.first<<" "<<stu[1].second.second<<endl;
    cout<<stu[2].first<<" "<<stu[2].second.first<<" "<<stu[2].second.second<<endl;
  }
  return 0;
}

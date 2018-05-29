#include<bits/stdc++.h>
using namespace std;

char tr[100];

void inorder(int node)
{
    if(tr[node]=='#') return ;

    inorder(2*node);
    cout<<tr[node];
    inorder(2*node+1);
}
void preorder(int node)
{
    if(tr[node]=='#') return ;

    cout<<tr[node];
    preorder(2*node);
    preorder(2*node+1);
}
void postorder(int node)
{
    if(tr[node]=='#') return ;
    inorder(2*node);
    inorder(2*node+1);
    cout<<tr[node];
}

void getdata(int node)
{
    cin>>tr[node];

    if(tr[node]=='#') return ;

    getdata(2*node);
    getdata(2*node+1);

}
int main()
{

    getdata(1);
    cout<<endl;
    inorder(1);
    cout<<endl;
    preorder(1);
    cout<<endl;
    postorder(1);
    return 0;
}


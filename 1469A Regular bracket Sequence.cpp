#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>inp;
map<ll,ll>mp;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll n,m,p,q,r,s;
       string str;
       cin>>str;
       n=str.size();
       ll a=0,b=0,c=0;
       if(str[0]==')'||str[n-1]=='(')
       c=-1;
       else if(n%2==1)
        c=-1;
       if(c==0)
        cout<<"Yes"<<'\n';
       else
        cout<<c<<endl;
        cout<<"No"<<'\n';


   }
}

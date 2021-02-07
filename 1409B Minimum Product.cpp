#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x,y,n;
    cin>>t;
    while(t--){
        cin>>a>>b>>x>>y>>n;
        if(a>b){
            if((b-y)==n){
                cout<<a*y<<cout;
            }
            else if((b-y)>n){
                cout<<(b-n)*a<<endl;
            }
            else{
                cout<<y*(a-n+y-b)<<endl;
            }
        }
            else if(a<b){
                if((a-x)==n){
                cout<<b*x<<cout;
            }
            else if((a-x)>n){
                cout<<(a-n)*b<<endl;
            }
            else{
                cout<<x*(b-n+y-a)<<endl;
            }
            }

    }



}

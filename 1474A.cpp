#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,x,y,z,m;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;;
        /*for(i=0;i<n;i++){
            cin>>s[i];
        }*/
        cout<<1;
        y=1;
        for(i=1;i<s.size();i++){
            x=s[i-1]-'0';
            x+=y;
            z=s[i]-'0';
            if(z+1!=x){
                cout<<1;
                y=1;
            }
            else{
                cout<<0;
                y=0;
            }

        }
        cout<<endl;
    }



}

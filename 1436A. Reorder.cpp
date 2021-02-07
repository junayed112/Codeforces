#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j;
    double m,b;
    cin>>t;
    while(t--){
        cin>>n>>m;
        long long a[n];
        long long s=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            s=s+a[i];

        }
        if(s==m){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        }
        return 0;
    }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i,s=0,c=0,flag=0;
    cin>>t;
    while(t--){
            cin>>n;
            c=0;
            long long a[n+1];
            for(i=0;i<n;i++){
        cin>>a[i];
    }
    c=0;
    for(i=0;i<n;i++){
            if(a[i]!=a[i+1]){
                s=s+a[i]+a[i+1];
                if(s!=a[i+2]){
                    c++;
                }
            }
    }
    if(c>0) {
        cout<<n<<endl;
        cout<<"1"<<endl;
    }
    else
        cout<<n<<" "<<n<<endl;
        cout<<n<<endl;
    }
    return 0;

}

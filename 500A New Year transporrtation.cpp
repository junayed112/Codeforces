#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,b,c,flag=0;
    cin>>n>>t;
    long long a[n];
    for(i=1;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        if((i+a[i])==t){
            flag=1;
            cout<<"YES"<<endl;
            return 0;
        }
        else if((i+a[i])!=t && (i+a[i])>t){
            flag=2;
        }
    }
    if(flag=0 || flag==2)
        cout<<"NO"<<endl;

    return 0;

}


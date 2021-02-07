#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t=0,n,i,j,k,c=0,m=10000000;
    cin>>n;
    long long a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++){
            t=0;
        for(j=0;j<n;j++){
            if(a[i]!=a[j]){
                t++;
            }
            if(b[i]!=b[j]){
                t++;
            }
        }
        m=min(m,t);
    }

    cout<<m<<endl;


    return 0;
}

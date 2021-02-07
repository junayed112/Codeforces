#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n],b[n/2],c[n/2];
        x=0,y=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]>0){
                b[x]=a[i];
                x++;
            }
            else{
                c[y]=a[i];
                y++;
            }
        }
        for(i=0;i<x;i++){
        cout<<b[i]<<" "<<c[i]<<" ";
    }
    }
    return 0;



}

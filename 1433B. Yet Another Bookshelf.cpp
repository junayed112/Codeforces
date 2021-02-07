#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,b;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n],c=0,s=0,d=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                s++;
            }
        }
        for(i=0;i<n;i++){
            if(a[i]==1){
                while(a[i+1]==0){
                    c++;
                    i++;
                    if(a[i+1]==1){
                        d=d+c;
                        c=0;
                    }
                }
            }
            }
            cout<<d<<endl;
        }
        return 0;
    }


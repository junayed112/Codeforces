#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    long long i,j,n,t,k,ans,c=-1;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long a[n],c=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++){
            ans=a[i];
            while(ans+a[0]<=k){
                c++;
                ans+=a[0];
            }
            }
            cout<<c<<endl;
        }
        return 0;
    }

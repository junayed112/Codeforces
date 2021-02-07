#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,t,c,d,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long a[n],ans=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++){
            ans+=(k-a[i])/a[0];
        }
        cout<<ans<<endl;
    }
    return 0;

}

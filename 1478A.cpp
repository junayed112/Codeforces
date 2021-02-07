#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n+1],c=0;
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++){
            cin>>x;
            a[x]++;
        }
        for(i=0;i<=n;i++){
            c=max(c,a[i]);
        }
        cout<<c<<endl;
    }

    return 0;

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i;
    cin>>n;
    int a[n],b[n],c[n],d[n],f[n];
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        s=a[0]+b[0]+c[0]+d[0];
        f[i]=a[i]+b[i]+c[i]+d[i];
    }
    sort(f,f+n);
    for(i=n-1;i>=0;i--)
    {
        if(s==f[i]){
            cout<<n-i;
            break;
        }
    }

    return 0;

}

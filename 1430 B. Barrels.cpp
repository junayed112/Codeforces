#include <bits/stdc++.h>
using namespace std;
void calculate()
{
    long long n,k;
    cin>>n>>k;
    long long i,j,s=0,a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<=k;i++){
            n=n-1;
            s=s+a[n];
        }
    cout<<s<<endl;

}

int main()
{
    long long t,n,k,i,j,b;
    cin>>t;
    while(t--){
        calculate();
    }

    return 0;
}

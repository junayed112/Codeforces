#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    long long n,s,b,i,j,sum=0;
    cin>>n>>s;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n/2;i<n;i++){
        sum+=abs(s-a[i]);
    }

    cout<<sum<<endl;
    cout<<b;

    return 0;

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,n,m,b,c, ans=1;
    cin>>n>>m>>a;
    ans*=ceil(n/a);
    ans*=ceil(m/a);
    cout<<fixed;
    cout.precision(0);
    cout<<ans;

    return 0;

}

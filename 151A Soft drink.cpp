#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np,a,b,e,f,i;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=(k*l)/nl;
    e=c*d;
    f=p/np;
    i=min(min(a,e),f);

    cout<<i/n;

    return 0;

}

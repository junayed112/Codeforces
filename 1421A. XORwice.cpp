#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    long long t,n,i,j,a,b,c=1000000000,d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        d=max(a,b);
        c=1000000000;
        for(i=0;i<=sqrt(d)+1;i++){
            c=min(c,((a^i)+(b^i)));
        }
        cout<<c<<endl;
    }

    return 0;

}

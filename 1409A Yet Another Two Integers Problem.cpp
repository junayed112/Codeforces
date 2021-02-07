#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        d=abs(a-b);
        if(d%10==0){
            cout<<d/10<<endl;
        }
        else
            cout<<(d/10)+1<<endl;
    }

    return 0;

}

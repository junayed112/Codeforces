#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,r,g,b,w;
    cin>>T;
    while(T--){
        cin>>r>>g>>b>>w;
        if(r==0 || g==0 || b==0 || w==0){
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }

    return 0;
}

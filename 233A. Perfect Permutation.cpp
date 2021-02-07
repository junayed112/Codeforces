#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,m,k;
    cin>>n;
    if(n&1){
        cout<<-1<<endl;
    }
    else{
        for(i=n;i>0;i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;

}

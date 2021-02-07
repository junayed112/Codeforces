#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a[10];
    cin>>t;
    while(t--){
        for(i=0;i<10;i++){
            cin>>a[i];
        }
        sort(a,a+10);
        cout<<a[1]<<endl;;
    }

    return 0;

}

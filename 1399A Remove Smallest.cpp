#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1000],i,j,b,c;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
            sort(a,a+n);
            for(i=1;i<n;i++){
                if(a[i]>a[i-1]+1){
                    cout<<"NO"<<endl;
                }
            }
        }

    }

    return 0;

}

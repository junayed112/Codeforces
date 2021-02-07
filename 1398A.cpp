#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,j,flag;
    cin>>t;
    while(t--){
            cin>>n;
        long a[n];
        for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0,j=i+2;i<n-2,j<n;i++,j++){
            if(a[i]+a[i+1]<=a[j]){
                flag=1;
                cout<<i+1<<" "<<i+2<<" "<<j+1<<endl;
                break;
            }
            else{
                flag=0;
            }
    }
    if(flag==0)
        cout<<"-1"<<endl;

    }

    return 0;
}

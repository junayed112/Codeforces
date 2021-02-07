#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(i%2==0){
                cout<<-a[i+1]<<" ";
            }
            else
                cout<<a[i-1]<<" ";
        }
        cout<<endl;
    }
    return 0;


}

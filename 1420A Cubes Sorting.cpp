#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,i;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n],c=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n-1;i++){
            if(a[i]<=a[i+1]){
                //cout<<"YES"<<endl;
                //break;
                c++;
            }
        }
        if(c>0){
            cout<<"YES";
        }
        else
            cout<<"NO";

            cout<<endl;
    }


}

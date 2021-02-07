#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n<=k){
            cout<<k-n<<endl;
        }
        else if(n>k){
            if((n-k)%2!=0){
                cout<<n-k<<endl;
            }
            else{
                if((n-k)==n){
                    cout<<"0"<<endl;
                }
                else{
                    cout<<n-k<<endl;
                }
            }
        }
    }

    return 0;
}

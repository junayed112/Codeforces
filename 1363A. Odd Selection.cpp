#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x,i;
    cin>>t;
    while(t--){
        cin>>n>>x;
        long long a[n],even=0,odd=0;
        for(i=0;i<n;i++){
                cin>>a[i];
            if(a[i]%2==0){
                even++;
            }
            else
                odd++;
        }
        if(n==x){
                if(odd%2!=0)
                    cout<<"YES";
                else
                    cout<<"NO";
        }
            else
            {
                if((even>0 && odd>0) || (odd==n && x%2!=0)){
                    cout<<"YES";
                }
                else
                    cout<<"NO";
            }
            cout<<endl;
        }
    }

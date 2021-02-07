#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b,n,i,t,j,k,flag;
    cin>>t;
    while(t--){
            cin>>n;
        long a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]+a[1]<=a[n-1]){
            cout<<"1 "<<"2 "<<n<<endl;
        }
        else
            cout<<"-1"<<endl;


    }
    return 0;

}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,c=0,f,b=-1,d;
    cin>>n;
    long long a[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=1;(i<=n  && a[i]<=n);i++){
        b=max(b,a[i]);
        if(i==b){
            c++;
            //i=b+1;
            cout<<a[i]<<" "<<c<<endl;
        }
    }

    //cout<<c;

    return 0;

}

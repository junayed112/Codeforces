#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long t,n,m,i,j,c=0;;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        c=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if((a[i] & a[j] > (a[i] ^ a[j]))){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }


}

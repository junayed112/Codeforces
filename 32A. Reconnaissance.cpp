#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,d,c=0;
    cin>>n>>d;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(abs(a[i]-a[j])<=d){
                c+=2;
            }
        }
    }

    cout<<c;

}

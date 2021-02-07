#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,m,x=0,y=1000,b,c;
    cin>>n;
    long long a[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<=y){
            y=a[i];
            b=i;
        }
        if(a[i]>x){
            x=a[i];
            c=i;
        }

    }
    j=abs(1-c)+(n-b);
    if(c>b){
        j=j-1;
    }
    cout<<j<<endl;

}

#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    long long t,d;
    double n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a=sqrt(n),i,j,c,d=1000000000,f,b,x;
        if(n==1){
            cout<<0<<endl;
        }
        else{
        for(i=1;i<a+1;i++){
            f=ceil(n/i)-1;
            d=min(d,f+i-1);
            }
            cout<<d<<endl;
        }

    }
    return 0;
}

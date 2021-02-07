#include <bits/stdc++.h>
using namespace std;
int seive( long long n)
{
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;

}
int main()
{
    long long t,n,i,j,x,y,b,c,d,sum,z;
    cin>>t;
    while(t--){
        cin>>d;
        c=100000;
        b=1+d;
        while(seive(b)==0){
            b++;
        }
        c=b+d;
        while(seive(c)==0){
            c++;
        }
        cout<<b*c<<endl;
    }

    return 0;

}

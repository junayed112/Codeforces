#include <bits/stdc++.h>
using namespace std;
int seive(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return n;
}
int main()
{
    long long t,n,i,j,m,d,flag=0,a;
    cin>>n>>m;
    for(i=n+1;i<=m;i++){
        a=seive(i);
        //cout<<a<<" ";
        if(a!=0){
            a=a;
            break;
        }
    }
    if(a==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



}

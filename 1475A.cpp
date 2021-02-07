#include <bits/stdc++.h>
using namespace std;
long long t,n;
int main()
{
    long long i,j,x,y,c,flag;
    cin>>t;
    while(t--){
        cin>>n;
        //long long a[n],b[n],c=0;
        flag=0;
        x=n%10;
        if(x&1){
            cout<<"YES"<<endl;
        }
        else{
        for(i=3;i<=99999;i+=2){
            if(n%i==0){
                flag==1;
                break;
            }

        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }



}

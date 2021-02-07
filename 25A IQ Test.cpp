#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,b,t=0,c,d=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            t++;
            b=i;
        }
        else{
            d++;
            c=i;
        }
    }
    if(t==1){
        cout<<b+1;
    }
    else
        cout<<c+1;


}

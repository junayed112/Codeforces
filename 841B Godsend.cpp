#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,c=0;
    cin>>n;
    long long a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0){
            c++;
        }
    }
    if(c>0){
        cout<<"First";
    }
    else
        cout<<"Second";

    return 0;

}

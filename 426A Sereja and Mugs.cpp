#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i,c=0;
    cin>>n>>s;
    int a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<s){
            c++;
        }
    }
    if(c>=n-1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;

}

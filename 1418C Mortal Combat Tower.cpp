#include <bits/stdc++.h>
using namespace std;

void combat()
{
    long long t,n,i,c,a;
    cin>>n;
    long long b[n];
    for(i=0;i<n;i++){
        cin>>b[i];
        c=0;
    }
    a=b[0];
    for(i=1;i<n;i++){
        if(b[i]==0){
            a=a+c/3;
            c=0;
        }
        else c++;
    }
    cout<<a+(c/3)<<endl;
}

int main()
{
    long long t;
    cin>>t;
    while(t--){
        combat();
    }

    return 0;

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,a,c;
    cin>>t;
    while(t--){
        cin>>n;
        long long b[n];
        for(i=0;i<n;i++){
            cin>>b[i];
            c=0;
        }
        a=b[0];
        for(i=1;i<n-2;i++){
            if(b[i]==1 && b[i+1]==1 && b[i+2]==1){
                c++;
                i=i+2;
            }
        }
        cout<<a+c<<endl;
    }

    return 0;

}

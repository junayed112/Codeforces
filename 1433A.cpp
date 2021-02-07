#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,b,c,x,s=0;;
    cin>>t;
    while(t--){
        cin>>x;
        long long a=x%10;
        s=0;
        b=log10(x)+1;
        for(i=1;i<=b;i++){
            s=s+i;
        }
        c=s+(a-1)*10;
        cout<<c<<endl;
    }

    return 0;

}


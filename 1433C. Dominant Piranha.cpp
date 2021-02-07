#include <bits/stdc++.h>
using namespace std;
void piranha()
{
    long long n,i,j,c=0,s=-1;
    cin>>n;
    long long a[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
        s=max(s,a[i]);
    }
    for(i=1;i<=n;i++){
        if(a[1]==a[i])
            c++;
    }
    if(c==n){
        cout<<"-1"<<endl;
    }
    else{
            for(i=1;i<=n;i++){
                if(s!=a[i] && s==a[i-1]) {
                    cout<<i-1<<endl;
                        break;
                }
                else if(s!=a[i] && s==a[i+1]){
                    cout<<i+1<<endl;
                    break;
                }
            }

    }


}
int main()
{
    long long t,n,i,j,a,b,c;
    cin>>t;
    while(t--){
           piranha();
    }

    return 0;

}


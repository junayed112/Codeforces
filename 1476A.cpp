#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,x,y,z,m,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long a,b,c;
        a=max(n,k),b=min(n,k);
        x=a%b;
        y=a/b;
        if(n<=k){
            if(x==0){
                cout<<y<<endl;
            }
            else{
                cout<<y+1<<endl;
            }
        }
        else{
        if(x==0){
            z=k*y;
        }
        else{
            z=k*(y+1);
        }
        //cout<<z<<endl;
        if(z%n==0){
            cout<<z/n<<endl;
        }
        else{
            cout<<(z/n)+1<<endl;
        }
        }
        cout<<-3%2<<endl;
        /*for(i=0;i<n;i++){
            cin>>a[i];
        }*/
    }



}

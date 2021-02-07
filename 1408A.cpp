#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n],b[n],c[n],d,e,f,g,h;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        for(i=0;i<n;i++){
            cin>>c[i];
        }
        g=a[0];
        cout<<g<<" ";
        //h=g;
        for(i=1;i<n;i++){
            if(i==n-1){
                if(a[0]==a[i]){
                    if(g!=b[i])
                    cout<<b[i]<<" ";
                    else
                        cout<<c[i]<<" ";
                }
                else if(a[0]==b[i]){
                    if(g!=a[i]){
                        cout<<a[i];
                    }
                    else
                        cout<<c[i]<<" ";
                }
                else if(a[0]==c[i]){
                    if(g!=a[i]){
                        cout<<a[i];
                    }
                    else
                        cout<<b[i]<<" ";
                }
            }
            else
            if(g!=a[i]){
                cout<<a[i]<<" ";
                g=a[i];
            }
               else{
                    if(g!=b[i]){
                        cout<<b[i]<<" ";
                        g=b[i];
                    }
                    else{
                        cout<<c[i]<<" ";
                        g=c[i];
                    }
                }
        }
            cout<<endl;

        }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],c=0,s=0,b=0,d,f=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                c++;
            }
        }
        sort(a,a+n);
        d=a[n-1]+1;
        if(c==0){
            cout<<"0"<<endl;
        }
            else{
                for(i=0;i<n;i++){
                    if(a[i]!=a[i+1]){
                        f++;
                        if(f<=2){
                            s=s+a[i];
                        }
                    }
                }
                cout<<s<<endl;
            }
        }


    return 0;

}

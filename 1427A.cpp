#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,b,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n],sum=0,b[n],c[n],k=0,l=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum==0){
            cout<<"NO"<<endl;
        }
        else{
            sort(a,a+n);
            cout<<"Yes"<<endl;
            sum=0;
                for(i=0;i<n;i++){
                    sum=sum+a[i];
                    if(sum==0){
                        k++;
                        break;
                    }
                }
                for(i=n-1;i>=0;i--){
                    sum=sum+a[i];
                    if(sum==0){
                        l++;
                        break;
                    }
                }
                if(k==l || k==0){
                    for(i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
                }
                else if(l==0){
                    for(i=n-1;i>=0;i--){
                    cout<<a[i]<<" ";
                }
                }
                cout<<endl;
            }
        }

    return 0;

}

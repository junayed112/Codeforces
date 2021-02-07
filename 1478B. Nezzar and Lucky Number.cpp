#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,d,i,j,c,x,y,z,b;
    cin>>t;
    while(t--){
        cin>>n>>d;
        long long a[n];
        int flag=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
                flag=0;
                /*y=a[i];
                z=log10(y);
                b=pow(10,z);*/
            if(a[i]%d==0 || a[i]%10==d || a[i]/10>=d){
                cout<<"YES"<<endl;
            }
            else{
                a[i]=a[i]-d;
                while(a[i]>=d){
                    x=a[i]%10;
                    if(x==d || a[i]/10==d){
                        flag=1;
                        break;
                    }
                    else{
                        a[i]=a[i]-d;
                        //a[i]=a[i]/10;
                    }
                }
                if(flag==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }

    return 0;

}

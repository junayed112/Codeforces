#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,x,y,m,z,w;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[10];
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++){
            cin>>m;
            a[m%3]++;
        }
        /*for(i=0;i<3;i++){
            cout<<a[i]<<" ";
        }*/
        //x=max(a[1],a[2]);
        if(a[1]<=a[2]){
            y=a[1];
        }
        else{
            y=a[2];
        }
        //y=min(a[1],a[2]);
        z=a[1]-y;
        w=a[2]-y;
        cout<<a[0]+y+z/3+w/3<<endl;
    }

    return 0;

}

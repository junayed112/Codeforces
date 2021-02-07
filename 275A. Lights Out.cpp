#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,k;
    long long a[6][6];
    memset(a,0,sizeof(a));
    for(i=1;i<4;i++){
        for(j=1;j<4;j++){
            cin>>a[i][j];
        }
    }
    for(i=1;i<4;i++){
        for(j=1;j<4;j++){
            k=a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j+1]+a[i][j-1];
            if(k&1){
                cout<<0;
            }
            else{
                cout<<1;
            }
        }
        cout<<endl;
    }

    return 0;

}

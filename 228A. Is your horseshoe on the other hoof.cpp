#include <bits/stdc++.h>
using namespace std;
//long long a[2000000000];
int main()
{
    long long t,n,i,j,c=0,x,y=0;
    long long a[10000];
    //memset(a,0,sizeof(a));
    for(i=0;i<4;i++){
        cin>>a[i];
        //a[x]++;
        //y=max(y,x);

    }
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(a[i]==a[j]){
                c++;
                if(j!=3){
                i++;
                }
            }

    }

    }

    cout<<c<<endl;

}

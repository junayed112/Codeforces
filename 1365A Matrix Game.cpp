#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int t,n,m,c=0,i,b,j;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int a[n][m];
        b=min(n,m);
        c=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]>0){
                    c++;
                }
            }
        }
        if(c>=b){
            cout<<"Vivek";
        }
        else{
            if((c-b)%2==0){
                cout<<"Vivek";
            }
            else
                cout<<"Ashish";
        }
        cout<<endl;
    }

    return 0;
}

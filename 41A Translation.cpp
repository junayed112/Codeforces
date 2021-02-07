#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c,d;
    cin>>c>>d;
    int i,j,l,n=0,flag;
    for(i=0;i<c.size();i++){
        for(j=d.size()-1;j>=0;j--){
            if(c[i]!=d[j])
            {
                n++;
            }
        }
    }
    cout<<n<<endl;
    if(n>0)
        cout<<"Yes";
    else
        cout<<"NO";

    return 0;

}

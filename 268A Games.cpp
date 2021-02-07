#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h[200],a[200],i,j,c=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>h[i]>>a[i];
    }
    for(i=0;i<n-1;i++)
    { for(j=i+1;j<n;j++){
        if(h[i]==a[j] && h[j]==a[i])
            c=c+2;
        else if(h[i]==a[j] || h[j]==a[i])
            c++;
    }
    }

    cout<<c<<endl;

}

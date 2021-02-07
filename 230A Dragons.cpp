#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long s,n,c=0,d,i,j,flag=0,x,y;
    cin>>s>>n;
    pair<long long,long long> a[n];
    for(i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);

    for(i=0;i<n;i++){
        if(s>a[i].first){
            s=s+a[i].second;
            flag=1;
            continue;
        }
        else
            cout<<"NO"<<endl;
            return 0;
    }
    if(flag==1)
        cout<<"YES"<<endl;


    return 0;

}

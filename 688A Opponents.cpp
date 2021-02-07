#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,c=0,a=0,f=0;
    cin>>n>>d;
    string s;
    while(d--){
            cin>>s;
            c=0;
    for(i=0;i<s.size();i++){
        if(s[i]=='1'){
            c++;
        }
    }
    //cout<<c<<endl;
    if(c==s.size()){
        f=0;
    }
    else{
        f++;
    }
    a=max(a,f);
    }
    cout<<a;
}

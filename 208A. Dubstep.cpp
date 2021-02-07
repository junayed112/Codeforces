#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++){
        while( (s[i]=='W') && (s[i+1]=='U') && (s[i+2]='B') ){
            i+=3;
            if(i<=s.size()-1)
                cout<<" ";
                else
                return 0;
        }
            cout<<s[i];
    }

    return 0;

}

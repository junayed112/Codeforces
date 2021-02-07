#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,c=0;
    if(isupper(s[0])){
            c=1;
    for(i=1;i<s.size();i++){
        if(isupper(s[i])){
            c++;
        }
    }
    if(c==s.size()){
        for(i=0;i<s.size();i++){
            putchar(tolower(s[i]));
        }
    }
    else
        cout<<s;
    }
    else if(!isupper(s[0])){
        c=0;
        for(i=1;i<s.size();i++){
        if(isupper(s[i])){
            c++;
        }
    }
    if(c==s.size()-1){
            putchar(toupper(s[0]));
        for(i=1;i<s.size();i++){
            putchar(tolower(s[i]));
        }
    }
    else if(c<s.size()-1){
        cout<<s;
    }
    }
}



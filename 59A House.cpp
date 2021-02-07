#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s;
    int i,c1=0,c2=0;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(islower(s[i])){
            c1++;
        }
        else
            c2++;
    }
    if(c1>=c2){
        for(i=0;i<s.size();i++)
            putchar(tolower(s[i]));
    }
    else{
            for(i=0;i<s.size();i++)
                putchar(toupper(s[i]));
    }
    return 0;

}

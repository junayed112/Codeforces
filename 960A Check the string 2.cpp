#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[10]="abc";
    int i=0,n=0,j=0,a=0,b=0,c=0,flag=0,k=0;
    string f;
    cin>>f;
    for(i=0;i<f.size();i++){
        if(f[0]!='a'){
            cout<<"NO";
            return 0;
        }
        if(f[i]==s[j]){
            j++;
        }
        if(f[i]=='a'){
            a++;
        }
        else if(f[i]=='b'){
            b++;
        }
        else if(f[i]=='c'){
            c++;
        }
    }
    if(j==3 && (a==b || b==c || c==a))
            cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}


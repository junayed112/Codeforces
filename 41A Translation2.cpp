#include <bits/stdc++.h>
#include <string.h>
#include <strings.h>
#include <math.h>
using namespace std;
int main()
{
    string c,d;
    cin>>c>>d;
    int i=0,j=d.size()-1,f=0,a=c.size(),flag=0;
    while(i<a && j>=0){
        if(c[i]==d[j]){
            flag=1;
            //f++;
        }
        else if(c[i]!=d[j]){
            cout<<"NO";
            return 0;
        }
        i++;
        j--;
    }
    if(flag==1){
        cout<<"YES";
    }
    return 0;

}

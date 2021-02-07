#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    char s[10]="hello",a;
    while(scanf("%c",&a) && a!='\n'){
        if(a==s[i]){
            i++;
        }
    }
        cout<<(i==5? "YES" : "NO");

    return 0;

}

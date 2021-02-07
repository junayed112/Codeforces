#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[7]="abc",a,f[10000];
    int i=0,n=0,j,c1=0,c2=0,c3=0,flag=0,k;
    while(scanf("%c",&a) && a!='\n'){
        //n++;
        char f[k]={a};
        k++;
        if(s[0]=='a')
        if(a==s[i])
            i++;
            if(i==3){
                flag=1;
            for(j=0;j<k;j++){
                if(f[j]='a')
                    c1++;
                else if(f[j]=='b')
                    c2++;
                else
                    c3++;
            }
        }
    }

    cout<<c1<<" "<<c2<<" "<<c3<<" ";
    if(flag==0){
        cout<<"NO";
    }
    else{
        if(c1==c2 || c2==c3 || c1==c3){
        cout<<"Yes";
    }
    else
        cout<<"NO";
    }

    return 0;
}

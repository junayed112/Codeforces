#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int year(int y)
{
    int a[10],c=0,i,x,m,k=0,flag;
    m=y;
    for(i=0;i<4;i++){
        a[i]=m%10;
        m=m/10;
    }
    for(i=0;i<4;i++){
        if(a[i]==a[i+1]){
            return year(y++);
        }
        else if(a[i]!=a[i+1]){
            c++;
        }
    }
        return c;

}

int main()
{
    int y,n,c=0,x,a[10],k=0,m,i,j;
    cin>>y;
    year:
    {
        y++;
        m=y;
        for(i=0;i<4;i++){
            a[i]=m%10;
            m=m/10;
        }
        for(i=0;i<3;i++){
            for(j=j+1;j<4;j++){
            if(a[i]==a[j]){
                goto year;
            }
            }
        }
    }
}
    printf("%d",y);
    return 0;

}

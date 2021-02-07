#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a=0,b=0,c=0,d=0,e,f,g,h,i,j,k;
        if(n%15==0){
            a=n/15;
            b=n/15;
            c=n/15;
        }
        else if(n%3==0 || n%5==0 || n%7==0){
            if(n%3==0){
                a=n/3;
            }
            else if(n%5==0){
                b=n/5;
            }
            else
                c=n/7;
        }
        else if(n%3!=0 && n%5!=0 && n%7!=0){
            if((n-3)%5==0 || (n-3)%7==0){
                a++;
                if((n-3)%5==0){
                    b=(n-3)/5;
                }
                else
                    c=(n-3)/7;
            }
            else if((n-5)%3==0 || (n-5)%7==0){
                b++;
                if((n-5)%3==0){
                    a=(n-5)/3;
                }
                else
                    c=(n-5)/7;
            }
            else if((n-7)%5==0 || (n-7)%3==0){
                c++;
                if((n-7)%5==0){
                    b=(n-7)/5;
                }
                else
                    a=(n-7)/3;
            }
            else
                d++;
        }
        if(d==0 && (a>=0 && b>=0 && c>=0)){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }

    return 0;

}

#include <bits/stdc++.h>
using namespace std;
long long n,i,j,k,a,c,b;

void solve()
{
    cin>>a;
        c=0;
        for(i=1;i<=sqrt(a)+1;i++){
            if(a%i==0){
                c++;
                b=a/i;
                if(b>(sqrt(a)+1)){
                    c++;
                }
                if(c>=4)
                    break;
            }
        }
        puts((c==3)?"YES":"NO");
        return ;
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    cin>>n;
    while(n--){
        solve();
    }
    return 0;

}

#include <bits/stdc++.h>
using namespace std;
long long t,n,m,i,j;
void solution()
{
    cin>>n>>m;
    long long a[n][m],b[m][n];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    cin>>t;
    while(t--){
        solution();
    }

    return 0;

}

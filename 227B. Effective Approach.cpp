#include<bits/stdc++.h>
const int M=300000;//M=1e6+100;
typedef long long int ll;
using namespace std;

ll n,v(0),p(0),m,x,i;
ll a[M];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);


	cin>>n;

	for(i=1;i<=n;i++)
	{
		cin>>x;
		a[x]=i;
	}
	cin>>m;
	while(m--)
	{
		cin>>x;
		cout<<i<<endl;
		i=a[x];
		cout<<a[x]<<endl;
		v+=i;
		p+=(n-i+1);
		cout<<v<<" "<<p<<endl;
	}
	cout<<v<<" "<<p;


}

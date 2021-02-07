#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--)
{
	int n,i,ans=INT_MAX;
	cin>>n;
	for(i=1;i*i<=n;i++)
	ans=min(ans,i-1+(n-1)/i);
	cout<<(ans)<<endl;
}

return 0;
}

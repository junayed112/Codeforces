//#include <stdio.h>
#include<bits/stdc++.h>
#include <string.h>
int main ()
{
	int n,k,c[27]={0},i,fab=1;
	char a[101];
	scanf("%d %d %s",&n,&k,a);
	for(i=0;i<strlen(a);i++)
	{
		c[a[i]-97]++;
	}
	/**for(i=0;i<27;i++)
	{
		if(c[i]>k)
		fab=0;
	}
	if(fab)
		printf("YES\n");
	else
		printf("NO\n");**/
		printf("%d",a-97);
	return 0;
}

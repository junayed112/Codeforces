#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,c=0,a[10000],k,sum;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        c=0,k=0,sum=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]!=0){
                c++;
            }
            else if(s[i]==0){
                a[k]=c;
                k++;
                c=0;
            }
            cout<<c<<"";
        }
        cout<<endl;
        //sort(a,a+k);
        for(i=0;i<=k;i++){
                cout<<a[i]<<" ";
            /**if(i%2==0){
                sum=sum+a[i];
            }
            if(i==k){
                cout<<sum;
            }**/
        }
        cout<<endl;
    }

    return 0;

}

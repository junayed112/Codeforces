#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,x,y,z;
    string s1,s2,s3;
    string s4="";
    cin>>s1>>s2>>s3;
    long long a[26],b[26];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    s4=s1+s2;
    sort(s4.begin(),s4.end());
    //sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    //cout<<s4<<endl;
    //cout<<s3<<endl;
    if(s3==s4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    /*for(i=0;i<s1.size();i++){
        x=s1[i]-97;
        a[x]++;
    }
    for(i=0;i<s2.size();i++){
        y=s2[i]-97;
        a[y]++;
    }
    for(i=0;i<s3.size();i++){
        z=s3[i]-97;
        b[z]++;
    }
    for(i=0;i<26;i++){
            cout<<a[i]<<" "<<b[i]<<endl;
        /*if(a[i]!=b[i]){
            cout<<"NO"<<endl;
            return 0;
        }*/
        return 0;
}


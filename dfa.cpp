#include<bits/stdc++.h>

using namespace std;

main()
{
    int n,flg=0,last;
    char strng[100];

    cout<<"Enter number of state:"<<endl;
    cin>>n;

    cout<<"Enter finishing state:"<<endl;
    cin>>last;
    int st[n+1][2];

    for(int i=1;i<n+1;i++){
        for(int j=0;j<2;j++){
            cin>>st[i][j];
        }
    }

    cin>>strng;

    int len=strlen(strng);

    for(int i=0;i<len;i++){
        flg=st[flg][strng[i]-'a'];
    }

    if(flg==last){
        cout<<"String accepted"<<endl;
    }
    else
        cout<<"String not accepted"<<endl;

}

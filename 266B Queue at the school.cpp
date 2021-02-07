#include<bits/stdc++.h>
using namespace std;
int main(){
     int i, j, k;
     int n;
     string str;
     cin >> n >> k;
     cin >> str;
     while(k--){
          for(i=0; i<str.length()-1; ++i) {
               if(str[i]=='B' && str[i+1]=='G') {
                    swap(str[i], str[i+1]);
                    i++;
                    //cout<<i<<" ";
               }
          }
     }
     //cout<<endl;
     cout << str << endl;

}

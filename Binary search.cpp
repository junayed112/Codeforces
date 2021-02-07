#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int size=10;
int a[size]={11,14,15,18,22,28,3138,39,42};
int count1=0;

int binary_search1(int startindex,int endindex,int value)
{
    count1++;
    int midindex=(startindex+endindex)/2;
    cout<<"Value of midindex "<<a[midindex]<<endl;
    if(a[midindex]==value)
    {
        return midindex;
    }
    else
    {
        if(startindex>=endindex)
        {
            return -1;
        }
        else
        {
            if(value>a[midindex])
            {
                cout<<"as value "<<value<<" > mid index "<<a[midindex]<<" start index "<<midindex+1<<" last index "<<endindex<<" mid index "<<(endindex+(midindex+1))/2<<" value "<<value<<endl;
                binary_search1(midindex+1,endindex,value);
            }
            else
            {
                cout<<"as value "<<value<<" < mid index "<<a[midindex]<<" start index "<<startindex<<" last index "<<midindex-1<<" mid index "<<(startindex+(endindex-1))/2<<" value "<<value<<endl;
                binary_search1(startindex,midindex-1,value);
            }
        }
    }
}

int main()
{
    int result = binary_search1(0,size-1,21);
    if(result<0){
    cout<<"Not found "<<count1<<" times"<<endl;
    }
    else
    {
        cout<<"Found at "<<result<<" index after "<<count1<<"times "<<endl;
    }

}

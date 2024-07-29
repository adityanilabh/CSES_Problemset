#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    vector<long long>arr(t);
    for(long long i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    long long result=0;
    for(long long i=1;i<t;i++)
    {
        if(arr[i]<arr[i-1])
        {
           result=result+arr[i-1]-arr[i];
           arr[i]=arr[i-1];
        }
    }
    cout<<result;
}
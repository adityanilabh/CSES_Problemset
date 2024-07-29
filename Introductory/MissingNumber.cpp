#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    long long sum=0;
    for(long long i=1;i<t;i++)
    {
        long long x;
        cin>>x;
        sum+=x;
    }
    cout<<(t*(t+1))/2-sum;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // technique one: using sum of n number;
    long long n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
         long long sum1=(n*(n+1))/2;
    long long sum2=0;
    for(int i=0;i<n-1;i++)
    {
       long long data;
       cin>>data;
       sum2+=data;
    }
    cout<<sum1-sum2<<endl;
    }
   
}
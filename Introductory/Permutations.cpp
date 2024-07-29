#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int n;
        cin>>n;
        if(n<4 && n!=1)
        {
           cout<<"NO SOLUTION"<<endl;
           return 0;
          // continue;
        }
        if(n==1)
        {
            cout<<1<<endl;
            return 0;
           // continue;
        }
        if(n==4)
        {
            cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
            return 0;
        }
        int i=1;
        while(i<=n)
        {
            cout<<i<<" ";
            i=i+2;
        }
        i=2;
        while(i<=n)
        {
            cout<<i<<" ";
            i=i+2;
        }
}
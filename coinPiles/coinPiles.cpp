#include<bits/stdc++.h>
using namespace std;
bool backtrack(long long *a,long long *b)
{
    if(*a==0 && *b==0)
    {
        return true;
    }
     
     if(*a<=0 || *b<=0)
     {
         return false;
     }
     *a=*a-2;
     *b=*b-1;
     bool result1=backtrack(a,b);
     *a=*a+2;
     *b=*b+1;
     if(result1==true)
     {
         return true;
     }
     *a=*a-1;
     *b=*b-2;
     bool result2=backtrack(a,b);
     *a=*a+1;
     *b=*b+2;
     return result1| result2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        backtrack(&a,&b)==true?cout<<"YES"<<endl:cout<<"NO"<<endl;
        
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long testCase;
    cin>>testCase;
    long long baseNumber=5;
    long long result=0;
    while(baseNumber<=testCase)
    {
        result+=(testCase/baseNumber);
        int limitFinder= (testCase/baseNumber);
        if(limitFinder<5)
        {
            break;
        }
        baseNumber*=5;
    }
    cout<<result<<endl;
}
/* this problem is based on the mathematical derivation. for assistance, do read this property.*/
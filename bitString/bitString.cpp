#include<bits/stdc++.h>
using namespace std;
#define MODULAR 1000000007
int main()
{
    int testCase;
    cin>>testCase;
    int resultOfTestCase=1;
    for(int i=0;i<testCase;i++)
    {
        resultOfTestCase*=2;
        resultOfTestCase%=MODULAR;
    }
    cout<<resultOfTestCase<<endl;
}
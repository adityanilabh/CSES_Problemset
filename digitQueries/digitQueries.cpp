#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--)
    {
        long long index;
        cin>>index;
        int startingDigitIncrementPoint=9;
        int digitCountOfNumber=0;
        if(index<=9)
        {
            cout<<index<<endl;
            continue;
        }
        while(index>=startingDigitIncrementPoint)
        {
            index=index-startingDigitIncrementPoint;
            startingDigitIncrementPoint*=10;
            digitCountOfNumber++;
        }
        //cout<<index<<" index hai"<<endl;
        int digitOfNumber=digitCountOfNumber+1;
        //cout<<digitCountOfNumber<<" digit Count Of number"<<endl;
        //cout<<digitOfNumber<<" digit Of Number"<<endl;
        int numberObtained= pow(10,digitCountOfNumber)+(index/digitOfNumber)-1;
        //cout<<numberObtained<<" number Obtained "<<endl;
        if(index%digitOfNumber!=0)
        {
           // cout<<" you uo  oufsdf"<<endl;
            numberObtained++;
        }
        // yaha se hage hai.
        int reminder=index%digitOfNumber;
        while(reminder--)
        {
            numberObtained=numberObtained/10;
        }
        numberObtained=numberObtained%10;
        cout<<numberObtained<<endl;
        
        
        
    }
}
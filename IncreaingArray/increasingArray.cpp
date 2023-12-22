#include<bits/stdc++.h>
using namespace std;
long long getArrayMinimumMoves(int sizeOfArray)
{
    vector<int>inputArray(sizeOfArray);
    long long currentIndex=0,previousIndex=-1,numberOfMoves=0;
    for(currentIndex=0;currentIndex<sizeOfArray;currentIndex++)
    {
        cin>>inputArray[currentIndex];
        if(previousIndex==-1)
        {
            previousIndex=0;
            continue;
        }
        else if(inputArray[currentIndex]<inputArray[previousIndex])
        {
            numberOfMoves+=abs(inputArray[currentIndex]-inputArray[previousIndex]);
            inputArray[currentIndex]=inputArray[previousIndex];
            
        }
        previousIndex=currentIndex;
    }
    return numberOfMoves;
}
int main()
{
    int sizeOfArray;
    cin>>sizeOfArray;
    if(sizeOfArray==1)
    {
        cout<<0<<endl;
        return 0;
    }
    long long  minimumMoves= getArrayMinimumMoves(sizeOfArray);
    cout<<minimumMoves<<endl;
}
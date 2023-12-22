#include<bits/stdc++.h>
using namespace std;
vector<int> solveInputCase(int input)
{
    vector<int>resultantVector;
    if(input==2 || input==3)
    {
        return resultantVector;
    }
    if(input==4)
    {
        vector<int>currentResultant= {3,1,4,2};
        return currentResultant;
    }
    int elementOdd=1;
    int elementEven=2;
    for(int currentArrayIndex=0;currentArrayIndex<input;currentArrayIndex++)
    {
        if(currentArrayIndex<ceil(input/2) && input%2==0)
        {
            resultantVector.push_back(elementOdd);
            elementOdd+=2;
            continue;
        }
        else if(currentArrayIndex<=ceil(input/2) && input%2!=0)
        {
            resultantVector.push_back(elementOdd);
            elementOdd+=2;
            continue;
        }
        else
        {
            resultantVector.push_back(elementEven);
            elementEven+=2;
            continue;
        }
    }
    return resultantVector;
}
void outputArrayElements(vector<int>&resultantVector,int input)
{
    for(int currentArrayIndex=0;currentArrayIndex<input;currentArrayIndex++)
    {
        cout<<resultantVector[currentArrayIndex]<<" ";
    }
}
int main()
{
    int input;
    cin>>input;
    vector<int>resultantVector=solveInputCase(input);
    if(resultantVector.size()==0)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    outputArrayElements(resultantVector,input);
    return 0;
}
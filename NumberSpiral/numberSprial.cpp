#include<bits/stdc++.h>
using namespace std;
long long getResultWithMax(long long rowOfMatrix,long long columnOfMatrix,long long maximumOfRowColumn)
{
      if(rowOfMatrix==maximumOfRowColumn)
      {
         return (columnOfMatrix)+((rowOfMatrix-1)*(rowOfMatrix-1));
      }
      else if(columnOfMatrix==maximumOfRowColumn)
      {
         return (columnOfMatrix*columnOfMatrix)-(rowOfMatrix)+1;
      }
      return pow(maximumOfRowColumn,2);
}
long long getResultValueAtPlace(long long rowOfMatrix,long long columnOfMatrix)
{
    long long maximumOfRowColumn= max(rowOfMatrix,columnOfMatrix);
    if(maximumOfRowColumn%2!=0)
    {
        return getResultWithMax(rowOfMatrix,columnOfMatrix,maximumOfRowColumn);
    }
    return getResultWithMax(columnOfMatrix,rowOfMatrix,maximumOfRowColumn);
}
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        long long rowOfMatrix,columnOfMatrix;
        cin>>rowOfMatrix>>columnOfMatrix;
        long long ResultValueAtPlace= getResultValueAtPlace(rowOfMatrix,columnOfMatrix);
        cout<<ResultValueAtPlace<<endl;
    }
}
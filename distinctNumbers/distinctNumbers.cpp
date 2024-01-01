#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    vector<long long>elementList;
    while(testCase--)
    {
        long long element;
        cin>>element;
        elementList.push_back(element);
    }
    long long counter=0;
    sort(elementList.begin(),elementList.end());
    for(long long index=0;index<elementList.size();index++)
    {
         if(index==0)
         {
            counter++;
            continue;
         }
         if(elementList[index-1]!=elementList[index])
         {
            counter++;
         }
    }    
    cout<<counter<<endl;
}
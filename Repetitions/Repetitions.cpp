#include<bits/stdc++.h>
using namespace std;
int findTheMaxLength(string &dnaString)
{
    int previousCharacterIndex=-1,indexOfString=0,MaxLength=0;
    int currentMax=0;
    for( indexOfString=0;indexOfString<=dnaString.length();indexOfString++)
    {
         if(previousCharacterIndex==-1)
         {
             previousCharacterIndex=0;
             currentMax++;
             continue;
         }
         else if(indexOfString==dnaString.length())
         {
            MaxLength=max(MaxLength,currentMax);
            return MaxLength;
         }
         else{
             if(dnaString[previousCharacterIndex]==dnaString[indexOfString])
             {
                currentMax++;
             }
             else if(dnaString[previousCharacterIndex]!=dnaString[indexOfString])
             {
                MaxLength= max(MaxLength,currentMax);
                currentMax=1;
             }
              previousCharacterIndex=indexOfString;
         }
    }
    return MaxLength;
}
int main()
{
    string dnaString;
    cin>>dnaString;
    cout<<findTheMaxLength(dnaString);
}
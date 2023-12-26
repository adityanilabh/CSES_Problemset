#include<bits/stdc++.h>
using namespace std;
void getresult(int sizeOfString,int index,vector<int>&alphabet,string &result,vector<string>&resultString)
{
    if(index>=sizeOfString)
    {
        resultString.push_back(result);
        return;
    }
    for(int i=0;i<alphabet.size();i++)
    {
        if(alphabet[i]>0)
        {
           char character=i+'a';
           
           result.push_back(character);
           alphabet[i]--;
           getresult(sizeOfString,index+1,alphabet,result,resultString);
           result.pop_back();
           alphabet[i]++;
        }
    }
}
int main()
{
    string str;
    cin>>str;
    int sizeOfString=str.length();
    vector<int>alphabet(26,0);
    for(int i=0;i<str.length();i++)
    {
        int index=str[i]-'a';
        alphabet[index]++;
    }
    string result="";
    vector<string>resultString;
    getresult(sizeOfString,0,alphabet,result,resultString);
    cout<<resultString.size()<<endl;
    for(int i=0;i<resultString.size();i++)
    {
        cout<<resultString[i]<<endl;
    }
    
}
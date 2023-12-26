#include<bits/stdc++.h>
using namespace std;
void outputResult(vector<string>resultset)
{
    for(int i=0;i<resultset.size();i++)
    {
        cout<<resultset[i]<<endl;
    }
}

int getBitToNumber(string resultsetString)
{
    int number=0;
    int powerAtPlace=0;
    for(int index=resultsetString.length()-1;index>=0;index--)
    {
        char digit=resultsetString[index];
        if(digit=='0')
        {
            digit=0;
        }
        else{
            digit=1;
        }
        number=number+(digit*pow(2,powerAtPlace));
        powerAtPlace++;
    }
    return number;
}
string getStringFromNumFunction(int reEnteredNumber)
{
    int binary[32];
    int i=0;
    while(reEnteredNumber>0)
    {
        binary[i]=reEnteredNumber%2;
        reEnteredNumber=reEnteredNumber/2;
        i++;
    }
    string result="";
    for(int j=i-1;j>=0;j--)
    {
        if(binary[j]==1)
        {
            result=result+"1";
        }
        else{
            result=result+"0";
        }
    }
    return result;
}
void resultOfSet(vector<string>resultSet,int power,int testCase)
{
    int beforeZeros=testCase;
    testCase=testCase-1;
    while(testCase--)
    {
        int NumberFromPower=pow(2,power);
        int CurrentBeforeZeros=beforeZeros-power-1;
        string beforeZeroString="";
        while(CurrentBeforeZeros--)
        {
            beforeZeroString=beforeZeroString+"0";
        }
        for(int index=resultSet.size()-1;index>=0;index--)
        {
            int numberFromresultset=getBitToNumber(resultSet[index]);
            int reEnteredNumber=numberFromresultset| NumberFromPower;
           // cout<<"reentered number "<<reEnteredNumber<<endl;
            string getStringFromNumber=getStringFromNumFunction(reEnteredNumber);
            getStringFromNumber=beforeZeroString+getStringFromNumber;
            resultSet.push_back(getStringFromNumber);
        }
        power++;
    }
    beforeZeros--;
    string beforeZeroString="";
    while(beforeZeros--)
    {
        beforeZeroString+="0";
    }
    string res1=resultSet[0];
    res1=beforeZeroString+res1;
    resultSet[0]=res1;
    // again
    res1=resultSet[1];
    res1=beforeZeroString+res1;
    resultSet[1]=res1;
    outputResult(resultSet);
}

int main()
{
    int testCase;
    cin>>testCase;
    vector<string>resultset;
    resultset.push_back("0");
    resultset.push_back("1");
    if(testCase==1)
    {
        outputResult(resultset);
        return 0;
    }
    int power=1;
    resultOfSet(resultset,power,testCase);
    return 0;
}
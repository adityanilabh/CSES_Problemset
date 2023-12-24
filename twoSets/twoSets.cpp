#include<bits/stdc++.h>
using namespace std;
void PrintOut(vector<int>&set)
{
    cout<<set.size()<<endl;
    for(int index=0;index<set.size();index++)
    {
        cout<<set[index]<<" ";
    }
    cout<<endl;
}
void  OutputTwoSets(int testCase)
{
    vector<int>set1;
    vector<int>set2;
       if(testCase%2==0)
       {
           int lastNum=testCase,startNum=1;
           bool ifOdd=true;
           
           while(startNum<lastNum)
           {
               if(ifOdd)
               {
                  set1.push_back(startNum);
                  set1.push_back(lastNum);   
               }
               else if(!ifOdd)
               {
                   set2.push_back(startNum);
                  set2.push_back(lastNum);
               }
                if(ifOdd)
                {
                    ifOdd=false;
                }
                else
                {
                    ifOdd=true;
                }
               startNum++;
               lastNum--;
           }
       }else if(testCase%2!=0)
       {

    // for odd case:
    long long sumUptoTestCase= (testCase*(testCase+1))/4;
    int mid= (testCase/2)+1;
    int startNum=1,endNum=testCase;
    int flag=1;
    while(sumUptoTestCase>0)
    {
        int sum=startNum+endNum;
        if(sumUptoTestCase>=sum)
        {
            set1.push_back(startNum);
            set1.push_back(endNum);
            startNum++;
            endNum--;
            sumUptoTestCase-=sum;
            continue;
        }
        else if(flag==1)
        {
            set1.push_back(startNum);
            set1.push_back(mid);
            startNum++;
            flag=0;
        }
        else if(flag==0)
        {
            while(startNum<=endNum)
            {
                if(startNum==mid)
                {
                    startNum++;
                    continue;
                }
                set2.push_back(startNum);
                startNum++;
                continue;
            }
            break;
        }
    }
       }

    PrintOut(set1);
    PrintOut(set2);
    
}
int main()
{
    int testCase;
    cin>>testCase;
    int testOdd=(testCase+1)/2;
    if((testCase%2==0 && (testCase/2)%2!=0) || (testCase%2!=0 && testOdd%2!=0))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        OutputTwoSets(testCase);
    }
}


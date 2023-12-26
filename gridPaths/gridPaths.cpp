#include<bits/stdc++.h>
using namespace std;
int getTotalPath(int rowOfMatrix, int columnOfMatrix,string testCase, int indexOfTestCase,vector<vector<bool>>&MatrixOfPath)
{
    int sizeOfTestCase=testCase.length();
    if(indexOfTestCase>=testCase.length())
    {
        return 1;
    }
    if(rowOfMatrix>=sizeOfTestCase || rowOfMatrix<0 || columnOfMatrix>=sizeOfTestCase || columnOfMatrix<0)
    {
        return 0;
    }
    MatrixOfPath[rowOfMatrix][columnOfMatrix]=true;
    int result=0;
    if(testCase[indexOfTestCase]!='?')
    {
       
    }
    else
    {
        
    }
    

}
int main()
{
     string testCase;
     cin>>testCase;
     int lengthOfTestCase=testCase.length();
     int indexOfTestCase=0;
     int rowOfMatrix=0,columnOfMatrix=0;
     vector<vector<bool>>MatrixOfPath(lengthOfTestCase,vector<bool>(lengthOfTestCase,false));
     int totalNumberOfPath= getTotalPath(rowOfMatrix,columnOfMatrix,testCase,indexOfTestCase,MatrixOfPath);
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int maxCount=1;
    int currCount=1;
    for(int i=1;i<str.length();i++){
       if(str[i]==str[i-1]){
           currCount++;
           maxCount=max(maxCount,currCount);
       }
       else{
           currCount=1;
       }
    }
    cout<<maxCount;
}
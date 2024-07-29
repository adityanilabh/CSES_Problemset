#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        li row, col;
        cin >> row >> col;

        li maxi = max(row, col);
        li high = maxi * maxi;
        li low = (maxi - 1) * (maxi - 1) + 1;

        if (row == col) {
            cout << high - (maxi - 1) << endl;
        } else if (col < row) {
            if (maxi % 2 != 0) {
                cout << high - (col - 1) << endl;
            } else {
                cout << low + (col - 1) << endl;
            }
        } else {
            if (maxi % 2 != 0) {
                cout << low + (row - 1) << endl;
            } else {
                cout << high - (row - 1) << endl;
            }
        }
    }
    return 0;
}



/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long row,col;
        cin>>row>>col;
        long long maxi=max(row,col);
        long long mini= min(row,col);
        long long high=maxi*maxi;
        long long low= high-(2*(maxi-1));
        // if high is odd:
        if(row==col)
        {
            cout<<high-(maxi-1)<<endl;
            continue;
        }
        if(col<row)
        {
            if(maxi%2!=0)
            {
               cout<<low+(maxi-1)<<endl;
               continue;
            }
            else{
                cout<<high-(maxi-1)<<endl;
            }
        }
        else if(col>row)
        {
            if(maxi%2!=0)
            {
                cout<<low+(maxi-1)<<endl;
            }
            else{
                cout<<high-(maxi-1)<<endl;
            }
        }
    }
}
*/
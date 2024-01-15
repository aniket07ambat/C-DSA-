#include<bits/stdc++.h>
#include<utility>
#include<math.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < mCols; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

}

int main(){


    return 0;
}
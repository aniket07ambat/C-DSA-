#include<bits/stdc++.h>
#include<utility>
#include<math.h>
using namespace std;

void print2darray(int array[][4], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            
            cout << array[i][j] << " ";
            
        }
        cout << endl;
    }
}

void sumrowwise(int array[][4], int row, int col){
    for(int i = 0; i<row; i++){
        int rowsum = 0;
        for(int j = 0; j<col; j++){
            rowsum = rowsum + array[i][j];
            
        }
        cout << rowsum;
        cout << endl;
    }
   
} 

void maxsumrowwise(int array[][4], int row, int col){
    int maxi = INT_MIN;
    int rowindex = -1;
    for(int i = 0; i<row; i++){
        int rowsum = 0;
        for(int j = 0; j<col; j++){
            rowsum = rowsum + array[i][j];
            
        }
        cout << rowsum << " " << endl;
        if(maxi < rowsum){
            maxi = rowsum;
            rowindex = i;
        }
    }
    cout << endl;
    cout << maxi << endl;
    cout << rowindex << endl;

}    

int main()
{
    int array[3][4] = {1, 2, 3, 4, 9, 10, 11, 12,5, 6, 7, 8};

    print2darray(array, 3, 4);
    cout << "Problem: row wise sum." << endl;

    sumrowwise(array, 3, 4);
    
    maxsumrowwise(array, 3, 4);









    return 0;
}



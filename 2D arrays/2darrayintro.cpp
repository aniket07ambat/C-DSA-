#include<bits/stdc++.h>
#include<utility>
#include<math.h>
using namespace std;

// how 2d array functions work?
// void print2darray(int arr[], int row, int col){
//     for(int i = 0; i<row; i++){
//         for(int j = 0; j<col; j++){
            
//             cout << arr[i][j] << " ";
            
//         }
//         cout << endl;
//     }
// }

bool isPresent(int array[][4], int target, int row, int col){
    for(int row= 0; row<3; row++){
        for(int col = 0; col<4; col++){
            if(array[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}


int main()
{
    /*
    int arr[3][4];
    cout << "give number" << endl;
    int count = 1;

    // row wise input
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            cout << "give number " << count++ << " ";
            cin >> arr[row][col];
        }
    }
    cout << endl;

    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            
            // cout << "row = " <<  row << " and col = " << col << " value: "<< arr[row][col];
            cout << arr[row][col];
            
        }
        cout << endl;
    }
    cout << endl;

    // column wise input
    for(int row = 0; row<4; row++){
        for(int col = 0; col<3; col++){
            cout << "give number " << count++ << " ";
            cin >> arr[col][row];
        }
    }
    cout << endl;

    for(int row = 0; row<3; row++){
        for(int col = 0; col<3; col++){
            
            //cout << "row = " <<  row << " and col = " << col << " value: "<< arr[row][col];
            cout << arr[row][col];
            
        }
        cout << endl;
    }
    cout << endl;
 */

    // int array[3][4] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 10, 11, 12};
    // for(int row = 0; row<3; row++){
    //     for(int col = 0; col<3; col++){
            
    //         cout << array[row][col] << " ";
            
    //     }
    //     cout << endl;
    // }

    int numbers[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
    // print2darray(numbers[0][0], 3, 4);
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            
            cout << numbers[row][col] << " ";
            
        }
        cout << endl;
    }

    int array[3][4] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 10, 11, 12};
    cout << "give me target " << endl;
   int target;
    cin >> target;
    int ans;
    

    if(isPresent(array, target, 3, 4)) {
        cout <<" Element found " << endl;
    }
    else{
        cout <<" Not Found" << endl;
    }



    return 0;
}


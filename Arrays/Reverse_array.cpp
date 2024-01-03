#include <iostream>
#include <climits> // Include this header for INT_MIN and INT_MAX
#include <math.h>
using namespace std;

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int size){
    // int e = size -1;
    // for(int i = 0; i <= e/2; i++){
    //     swap(arr[i], arr[e - i]);
    // }
    int start = 0;
    int end = size-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
    return 0;
}









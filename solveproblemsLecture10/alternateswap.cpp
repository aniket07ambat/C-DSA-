#include <iostream>
#include <climits> // Include this header for INT_MIN and INT_MAX
#include <math.h>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i = 0; i<size; i = i + 2){
        if(i + 1 < size) // This condition is imp.
            swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[], int n) {

    for(int i = 0; i<n; i++ ) {
        cout<< arr[i] <<" ";
    }cout<<endl;

}

int main(){
    
    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11, 33, 9, 76, 43};

    swapAlternate(even, 8);
    printArray(even, 8);

    cout << endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);
    return 0;
}





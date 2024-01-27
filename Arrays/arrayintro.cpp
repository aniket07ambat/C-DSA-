#include<iostream>
using namespace std;

// array used widely.
// Fill function to fill whole array with a value. 
/*
int main()
{
    int array[4] = {0};
    fill(array, array + 4, 3);
// fill(myArray, myArray + size, 42);
    // Print the array elements
    for (int i = 0; i < 4; i++) {
        cout << array[i] << " ";
        // cout << endl;
        cout << i << " ";
        cout << endl;
    }
    return 0;
}
*/
// This []  bracket is imp.
void printarray(int arr[], int size)
{
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int first[3] = {2, 4, 6};

    int second[15] = {2, 4};
    printarray(second, 15);
    // sizeof function use
    int second_size = sizeof(second)/sizeof(int);
    cout << second_size << endl; 
    // ans = 15 but we only add 2 intergers into array. while remainging are 0, 0, 0, .... 
    // so we don't use this formula.

    // char arrays
    char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
    cout << ch[3] << endl;

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<5; i++) {
        cout << ch[i] << " ";
    }
    cout<< " printing DONE " << endl;

    // Different typers of arrays.
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];


    cout << endl << " Everything is Fine " << endl << endl;

}


























#include <iostream>
#include <climits> // Include this header for INT_MIN and INT_MAX
#include <math.h>
using namespace std;

int getsum(int arr[], int size)
{
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans + arr[i];
    }
    return ans;
}

int main()
{
    int array[4] = {4, 12, 8, 10};
    int size = 4;

    int sum = getsum(array, size);
    cout << sum << endl;

    return 0;
}




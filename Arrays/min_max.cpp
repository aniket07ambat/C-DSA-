#include <iostream>
#include <climits> // Include this header for INT_MIN and INT_MAX
#include <math.h>
using namespace std;
// array is given find min and max element.
/*
int main()
{

    int array[4] = {4, 12, 8, 10};
    int size = 4;
    int min = INT32_MAX;
    int max = INT32_MIN;
    for(int i = 0; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }
    cout << "max: " << max;
    cout << "  and min: " << min << endl;
    return 0;
}
*/

#include <iostream>

using namespace std;

int getMin(int num[], int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);
    }

    return mini;
}

int getMax(int num[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
    }

    return maxi;
}

int main()
{
    int array[4] = {4, 12, 8, 10};
    int size = 4;

    cout << " Maximum value is " << getMax(array, size) << endl;
    cout << " Minimum value is " << getMin(array, size) << endl;
    return 0;
}

#include<bits/stdc++.h>
#include<utility>
#include<math.h>
using namespace std;



int main(){
    
    vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5};

    // use sort
    sort(numbers.begin(), numbers.end());

    for(auto i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;

    string name = "acfhbie";
    sort(name.begin(), name.end());
    cout << name << endl;

    // find
    int target = 9;
    auto result = find(numbers.begin(), numbers.end(), target);
     if (result != numbers.end()) {
        cout << "Found " << target << " in the vector at " << *(result) << endl;
    } else {
        cout << target << " not found in the vector." << endl;
    }








    return 0;
}



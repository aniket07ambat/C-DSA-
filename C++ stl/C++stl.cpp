#include<bits/stdc++.h>
#include<utility>
#include<math.h>
using namespace std;

void extrapair() {
    
    // FOR USING PAIR USE MUST ADD #include<utilty> library. 
    
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;;
    
    pair<int, pair<int, int>> s = {1, {3, 4}};
    cout << s.first << " " << s.second.first << " " << s.second.second << endl;

    pair<int, int> arr[] = {{1,2}, {2,3}, {4,5}};
    cout << arr[1].second << " " << arr[2].first << endl;
    
}

void explainVector() {
    
    // If you don't know size of given array you store in vector.
    // Arrays have constant size.

    vector<int> v;
    v.push_back(1);   // {1}
    v.emplace_back(2); // emplace is generally faster. {1, 2}

    v.pop_back(); // {1} 

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 3);

    vector<int> t(5, 100);
    // {100, 100, 100, 100, 100}

    vector<int> y(5); // {0, 0, 0, 0, 0} 0 or any garbage value.

    vector<int> u(t); // {100, 100, 100, 100, 100} another container with same values.

    // Iterators points to the memory of elements.

    // iterator syntax
    // v.begin() points to the address of first element.
    // if {20, 10, 15, 6, 7}
    vector<int>::iterator it = v.begin(); 

    cout << v[0] << " " << endl; // print: 20

    it++;
    cout << *(it) << " " << endl; // print: 10

    it = it + 2;
    cout << *(it) << " " << endl; // print: 6
    
    // important: v.end points to the memory location right after the last element.
    // so get last element 7 we have to do i--. 

    vector<int>::iterator it = v.end();
    it--;
    cout << *(it) << " " << endl; // print: 7

    cout << v.back() << " " << endl; // print: 7

    // Unimportant check in chatgpt
    // vector<int>::iterator it = v.rend();

    // vector<int>::iterator it = v.rbegin();

    // Printing of vector

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    } 

    // 'auto' is useful. auto atomatically assigned according to given data.
    // ex. if int a = 5;
    //  then auto a = 5;  is also the same. 
    // ex.  here auto a = "raj" here auto is string.
    // auto means autoassignation.

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << endl;
    }

    // auto each loop. v = {10, 20, 30};
    // here it is int.
    for(auto it : v) {
        cout << it << endl;
    }    

    // deleteing element
    // here v.erase() deletes addres of given element then vector atuomatically reshuffles.

    // {10, 20, 30, 40}
    v.erase(v.begin()+1);  //erase: 20
    
    // for deleting multiple elements
    
    // [give starting address and ending address after the element]

    // {10, 20, 30, 40, 50, 60}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 40, 50, 60 }find?

    // make sure start is included and end is excluded.

    // Insert function

    vector<int> v(2, 100); // {100, 100}

    v.insert(v.begin(), 300); // {300, 100, 100};

    v.insert(v.begin()+1, 5); // {300, 5, 100, 100};

    v.insert(v.begin() + 1, 2, 3); // {300, 3, 3, 5, 100, 100}

    // not imp
    vector<int>copy(2, 50);  // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); 
    // {50, 50, 300, 3, 3, 5, 100, 100}

    // for size of vector
    cout << v.size() << endl;  // size: 8

    // swap function in vectors
    vector<int> v1,v2;
    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // 
    // v1 -> {30, 40}
    // v2 -> {10, 20}

    // clearing the entire vector
    v.clear();

    cout << v.empty();


}


int main(){

    // extrapair();

    explainVector();




    return 0;
}

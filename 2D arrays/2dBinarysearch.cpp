#include<bits/stdc++.h>
#include<utility>
#include<math.h>
using namespace std;

// Time complexity log(row*col).

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row * col -1;
        int mid = start + (end - start)/2;
        while(start <= end){
            int element = matrix[mid / col][mid % col];
            
            if(element == target){
                return true;
            }
                
            if(element < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
    }
};


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int i = 0;
        int j = col - 1;

        while(i < row && j >= 0){
            int current = matrix[i][j];
            if(current == target){
                return true;
            }
            if(current > target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};

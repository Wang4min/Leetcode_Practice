/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size()-1;
    while(low <= high){  //why = included
        int mid = low + (high - low)/2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low; //think
}

int searchInsert1(vector<int>& nums, int target){
    //https://www.cplusplus.com/reference/algorithm/upper_bound/
    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
}

int main(){
    vector<int> x;
    int target;
    //searchInsert(x, target);
    searchInsert1(x, target);
}
/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes1(vector<int>& nums) {
    unsigned i, j;
    for(i=0, j=0; i<nums.size(); i++){
        if(nums[i]) swap(nums[i], nums[j++]);
    }       
}

//https://en.cppreference.com/w/cpp/algorithm/stable_partition
void moveZeroes2(vector<int>& nums) {
    stable_partition(nums.begin(), nums.end(), [](int i){return i>0;});

}

int main(){
    vector<int> nums{1, 2, 3, 0, 0};
    moveZeroes2(nums);
}
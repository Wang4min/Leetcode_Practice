/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

#include <iostream>
#include <vector>
using namespace std;

//O(n)
int singleNumber(vector<int>& nums) {
    unsigned i;
    int res = 0;
    for(i=0; i<nums.size(); i++)
        res ^= nums[i];

    return res; 
}

int main(){

}
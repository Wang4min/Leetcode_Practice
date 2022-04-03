/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//O(nlogn)
int majorityElement1(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    unsigned mid = nums.size()/2; //notice!
    return nums[mid];
}

//Boyer–Moore majority vote algorithm
//https://blog.csdn.net/kimixuchen/article/details/52787307?spm=1001.2101.3001.6650.1&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-1.pc_relevant_aa&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-1.pc_relevant_aa&utm_relevant_index=2
//https://blog.csdn.net/happyeveryday62/article/details/104136295?spm=1001.2101.3001.6661.1&utm_medium=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-1.pc_relevant_aa&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-1.pc_relevant_aa&utm_relevant_index=1
//https://ithelp.ithome.com.tw/articles/10213285
//O(n)
int majorityElement2(vector<int>& nums) {
    unsigned i, cnt = 1;
    int candidate = nums[0];

    for(i=1; i<nums.size(); i++){
        if(candidate == nums[i]) cnt++;
        else{
            if(cnt > 0) cnt--;
            else {
                candidate = nums[i];
                cnt++;
            }
        }
    }

    return candidate;
}


int main(){
    
}
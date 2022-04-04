/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseString(vector<char>& s) {
    unsigned l = 0, r = s.size() - 1;
    while(l < r){
        swap(s[l++], s[r--]);
    }
}

int main(){

}
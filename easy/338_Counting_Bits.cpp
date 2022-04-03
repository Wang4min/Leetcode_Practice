/*
Given an integer n, 
return an array ans of length n + 1 such that for each i (0 <= i <= n), 
ans[i] is the number of 1's in the binary representation of i.
*/

#include <iostream>
#include <vector>
using namespace std;

//O(n)
vector<int> countBits(int n) {
    vector<int> arr(n+1, 0);
    unsigned i;
    for(i=1; i<=n; i++){
        if(i%2 == 0)
            arr[i] = arr[i/2];
        else
            arr[i] = arr[i-1] + 1;
    }
    return arr;
}

int main(){

}
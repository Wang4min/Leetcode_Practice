/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

#include <iostream>
using namespace std;


int climbStairs(int n) {
    unsigned i;
    int res = 0;
    if(n <= 2) res = n;
    else{
        int pre1 = 1, pre2 = 1;
        for(i=3; i<=n; i++){
            res = pre1 + pre2;
            pre1 = pre2;
            pre2 = res;
        }
    }
    return res;
}

int main(){
    cout << climbStairs(2);
}
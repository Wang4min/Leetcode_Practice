/*
Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, 
and only the integer part of the result is returned.
*/

#include <iostream>
#include <math.h>
using namespace std;

//O(sqrt(n))
int mySqrt1(int x) {
    long long int res = 1;
    long long tmp = 1;
    while(tmp <= x){
        res++;
        tmp = res*res; //May overflow
                       //https://stackoverflow.com/questions/42396865/why-does-implicit-conversion-of-int-to-long-long-int-give-unexpected-answer-in-c
        cout << "res: " << res << endl;
    }
    return res-1;
}

//O(logn)
int mySqrt2(int x){
    if(x == 0) return 0;
    int l = 0, r = x, mid, res;
    while(l <= r){
        mid = (l + r)/2;
        if(mid == 0) return 1;
        if(mid == x/mid) return mid;
        else if(mid < x/mid){
            l = mid + 1;
            res = mid; 
        }
        else
            r = mid - 1;
    }
    return res;
}

int main(){
    cout << mySqrt1(2147395600) << endl;
    //cout << sqrt2(2147395600);
}
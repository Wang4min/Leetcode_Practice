#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

//Solution1
bool isPalindrome1(long int x){
    if(x < 0) return false;
    string res = to_string(x);
    long int start = 0, end = res.size()-1;
    while(start < end){
        if(res[start++] != res[end--])
            return false;
    }
    return true;
}

//Solution2
bool isPalindrome2(long int x){
    long int tmp = x;
    long int res = 0;
    if(x < 0) return false;
    else{
        while(x){
            res = res*10 + x%10;
            x/=10;
        }
        return (res == tmp);
    }
}

bool isPalindrome3(long int x){
    if(x < 0) return false;
    else{
        deque<int> dq;
        while(x){
            dq.push_back(x%10);
            x/=10;
        }
        while(!dq.empty()){
            if(dq.front() != dq.back())
                return false;

            dq.pop_front();
            if(dq.size()<=1)
                return true;

            dq.pop_back();
            if(dq.size()<=1)
                return true;
        }
    }
    return true;
}

int main(){
    long int x;
    cin >> x;
    //isPalindrome1(x);
    //isPalindrome2(x);
    isPalindrome3(x);
}
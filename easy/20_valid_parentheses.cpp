#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool fun(string x){
    stack<char> s;
    unsigned i;
    for(i=0; i<x.size(); i++){
        if(s.empty() || x[i] == '(' || x[i] == '{' || x[i] == '[')
            s.push(x[i]);
        else if( (x[i] == ')' && s.top() == '(') || (x[i] == '}' && s.top() == '{') || (x[i] == ']' && s.top() == '[') )
            s.pop();
        else
            return false;
    }
    return s.empty();
}

int main(){
    string x;
    fun(x);
}
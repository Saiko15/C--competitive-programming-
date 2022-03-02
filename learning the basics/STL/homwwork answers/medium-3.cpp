// ● Implement a method that takes number >= 0 and reverse its digits using a
// stack
// ● int reverse_num(int num)
// ● E.g. Input: 1234, Output: 4321
#include<iostream>
#include<stack>
using namespace std;

int reverse_num(int num){
    stack<int> s;
    int new_num;

    while(num){
        new_num = num % 10;
        s.push(new_num);
        num = num / 10; 
    }
    int mul = 1;
    while (!s.empty()){
        num = s.top() * mul + num;
        mul = mul * 10;
        s.pop();
    }
    return num;
}

int main() {
    cout << reverse_num(1234);
    
}

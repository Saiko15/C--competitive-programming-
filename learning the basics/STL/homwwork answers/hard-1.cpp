#include<iostream>
#include<stack>
using namespace std;

int scoreOfParentheses(string s) {
    stack<char> st;
    int score = 0;

    for (auto ch : s)   
    {
        if (!st.empty() && st.top() != ch)
            st.pop(), score++;

        else 
            st.push(ch);
    }
    
    return score;    
}

int main(){
    cout << scoreOfParentheses("()") << "\n";
    cout << scoreOfParentheses("(())") << "\n";
    cout << scoreOfParentheses("()()") << "\n";
    cout << scoreOfParentheses("(())()") << "\n";
    cout << scoreOfParentheses("((())())") << "\n";
}

// Input: s = "()"
// Output: 1

// Input: s = "(())"
// Output: 2

// Input: s = "()()"
// Output: 2
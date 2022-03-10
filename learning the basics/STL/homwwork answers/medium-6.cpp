#include<iostream>
#include<stack>
using namespace std;

string removeDuplicates(string s) {
    //int len = s.size();
    stack<char> st;

    for (auto c : s)
    {
        if (!st.empty() && st.top() == c)
            st.pop();
        else 
            st.push(c);
    }
    s = "";
    while(!st.empty())
        s = st.top() + s, st.pop();

    return s;      
}

int main(){
    cout << removeDuplicates("abbaca") << "\n";
    cout << removeDuplicates("azxxzy") << "\n";

    return 0;
}

// abbaca --> ca
// azxxzy --> ay
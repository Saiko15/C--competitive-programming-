#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void print(stack<string> &s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main() {
    stack<string> s;
    s.push("ahmed");
    s.push("sayed");
    s.push("ali");

    print(s);	// ali sayed ahmed
                // but if queue it'd be ahmed sayed ali
}
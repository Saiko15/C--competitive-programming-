// ● Read 2 strings, then output YES if the first smaller than or equal to second.
// Otherwise, output NO
// ○ Don’t use < operator to compare strings. Use loops
// ● Input ⇒ Output
// ○ aaa aaa ⇒ YES
// ○ aaaaa aa ⇒ NO
// ○ abc d ⇒ YES
// ○ dddddddddddddd xyz ⇒ YES
// ○ azzzzzzzz za ⇒ YES
// ○ za azzzzzzzz ⇒ NO
#include<iostream>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;

    if (first.size() <= second.size())
        cout << "YES";
    else    
        cout << "NO";
    
}
// ● Read a very long string of digits (at least 6 digits), and add 5555 to it.
// ○ Don’t convert to integer, as integer has max limit for values
// ● Input ⇒ Outputs
// ○ “100000” ⇒ “105555”
// ○ “10001234” ⇒ “10006789”
// ○ “3001072” ⇒ “3006627”
// ○ “10999999999” ⇒ “11000005554”
// ○ “999999999999999999999999999999999” ⇒
// “1000000000000000000000000000005554”
#include<iostream>
using namespace std;

int main() {
    int num = 0;
    string str;
    cin >> str;

    for (int i = 0 ; i < str.size() ; i++){
        num = num * 10 + (str[i] - '0');
    }
    cout << num + 5555;
}
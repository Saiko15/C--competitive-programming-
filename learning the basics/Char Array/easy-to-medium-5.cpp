// ● Read a string of 6 letters maximum, convert it to int then print
// ○ the number, the number multiplied by 3
// ● Input ⇒ output
// ○ “100” ⇒ 100 300
// ○ “0200” ⇒ 200 600

#include<iostream>
using namespace std;

int main() {
    int num = 0;
    string str;
    cin >> str;
    
    for (int i = 0; i < str.size() ; i++){
        num = num * 10 + (str[i] - '0');  // because '2' = 50 and '0' = 48 so '2' - '0' = 2 , '1' - '0' = 1;
    }

    cout << num << " " << num * 3;

}
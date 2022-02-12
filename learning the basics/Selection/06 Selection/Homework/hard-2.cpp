#include<iostream>
using namespace std;

int main() {
    int s1, e1, s2, e2;
    int a= -1;
    cin >> s1 >> e1 >> s2 >> e2;
    if (s2>s1 && s2<e1)
        cout << s2 << " " << e1<<"\n";
    else
        cout << a;
        // 1 6 3 8 ⇒ 3 6
        // 1 15 20 30 ⇒ -1
    // if(e1>s2 && e1<e2)
}
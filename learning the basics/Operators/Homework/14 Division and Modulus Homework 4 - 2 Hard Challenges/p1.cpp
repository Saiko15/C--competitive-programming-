#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    bool is_E = (a % 2 == 0); //1 if Even
    bool is_O = !(a % 2 == 0); //0 if Even

    cout<< ((int)is_E * 100) + ((int)is_O * 7) <<"\n"; // don't forget to transfer it to int

    return 0;
}
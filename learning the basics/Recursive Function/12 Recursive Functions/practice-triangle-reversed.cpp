#include<iostream>
using namespace std;
int m = 1;

void print_triangle(int levels) {
    
    if (levels == 0) 
        return;

    for (int i = 0; i < m; ++i)
        cout << "*";
    cout <<"\n";
    m++;
    print_triangle(levels - 1);
}
int main() {
    print_triangle(20);
}
// ● Write a function that reads 6 numbers and compute their maximum. Create
// the following functions
// ○ max(int a, int b, int c)
// ○ max(int a, int b, int c, int d)
// ○ max(int a, int b, int c, int d, int e)
// ○ max(int a, int b, int c, int d, int e, int f)
// ● How can
// ○ max(int a, int b, int c, int d) utilize max(int a, int b, int c) ? and so on
#include<iostream>
using namespace std;

int max(int a, int b, int c){
        return a + b + c;
}
int max(int a, int b, int c, int d){
        return max(a, b, c)+ d;
}
int max(int a, int b, int c, int d, int e){
        return max(a, max(b, c, d, e));
}
int max(int a, int b, int c, int d, int e, int f){
        return max(a, b, c, d, e) + f;
}

int main() {
    
    cout << max (1, 2, 3, 4, 5);
}
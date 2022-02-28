#include<iostream>
using namespace std;

template<typename...Args>
auto sum_and_add(auto...args){
    return (args / ... );
}

int main() {
    cout << sum_and_add(10000, 2, 5, 10, 4);
    // sum_and_add(5.2, 4.5);
}
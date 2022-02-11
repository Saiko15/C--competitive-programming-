#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a; // 1125 , 15685

    int b = a % 1000; //125 , 685
    int c = a % 100; //25 , 85
    int e = a % 10; //5 ,5

    int l3 = (b - c) / 100; // 1 , 6
    int l2 = (c - e) / 10; //2 , 8
    int l1 = e; //5 ,5
    cout<< b <<" "<< c <<" "<< e <<"\n";
    cout<< l3 + l2 + l1;



    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int a, b, neg_b;
    cout<<"Enter 2 numbers : ";
    // cin>> a >> b;
    a = 5, b = -1;
     // neg_b = b + 1; // wrong because the positive 1 will be 2

    int equ_is_1 = a * a;
    int equ_is_neg_1 = 2 * a + 1 ;

    // we wanna make the -1 input as 0, to benifit from it in our eguation

    int is_1= (b + 1)/ 2; // if 1 the output will still 1, if -1 will be 0
    int is_neg_1 = 1 - is_1; // 0 will be 1

    cout<< is_1 * equ_is_1 + is_neg_1 * equ_is_neg_1; 
    
    
}
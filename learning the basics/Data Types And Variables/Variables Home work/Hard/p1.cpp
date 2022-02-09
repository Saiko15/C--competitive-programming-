#include<iostream>
using namespace std;

int main() {
    int num1 = 1, num2 = 2, num3 = 3, num4 = 4;

    /*
    num4 = num2;//2
    num2 = num1 ; //  1
    num1 = num4; // 2

    num4 = num3; // 3
    num3 = num2 ; // 1
    num2 = num4 ; // 1
    

    num4 = num1; // 1
	num1 = num2; // 2
	num2 = num3; // 3
	num3 = num4; // 1
    */
    // 2 3 1

    num4 = num3; // 3
	num3 = num1; // 1
	num1 = num2; // 2
	num2 = num4; // 3  
    
    // 3 1 2


    cout<< num1 <<" "<< num2 <<" "<< num3 ; // 3 1 2
}
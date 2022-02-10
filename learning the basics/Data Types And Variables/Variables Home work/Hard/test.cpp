#include<iostream>
using namespace std;

int main() {
    int num1=1, num2=2, num3=3, num4=4, num5=5;
    num5=num1; //1
    num1=num4; //4
    num4=num3; //3
    num3=num2; //2
    num2=num5;//1

    cout<< num1<<" "<<num2 <<" "<<num3 <<" "<< num4;

    return 0;

}
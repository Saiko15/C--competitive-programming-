#include<iostream>
using namespace std;

int main() {

    int num1 = 1, num2 = 2, num3 =3;
       
    num3 = num1; //1

    num1 = num2; //2
    num2 = num3; //1

    cout<<num1<<" "<< num2;
}
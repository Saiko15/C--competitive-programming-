#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3;

	num1 = 0, num2 = 1, num3 = num1 + num2, cout <<num3<<"\n";  // 1
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 1 + 1 = 2
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 1 + 2 = 3
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 2 + 3 = 5
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 3 + 5 = 8 
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 5 + 8 = 13
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 8 + 13 = 21
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 13 + 21 = 34
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 21 + 34 = 55


	return 0;
}


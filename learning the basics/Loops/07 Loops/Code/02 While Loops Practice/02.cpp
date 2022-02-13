#include<iostream>
using namespace std;

int main() {
	int num, pow;
	cin >> num >> pow;

	int result = 1;

	while (pow >= 1) {
		result *= num;
		--pow;
	}
	cout << result;
	return 0;
}

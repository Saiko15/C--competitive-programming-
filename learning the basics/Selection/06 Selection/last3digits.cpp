#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num < 10000)
        cout <<"This is a small number";
    else 
    {
        int last3, last2, last1, sum;
        last3 = (num % 1000)/100;
        last2 = (num % 100)/10;
        last1 = num % 10;
        sum = last1 + last2 + last3;
        if (sum % 2 == 1) // ((sum%2) !=0 ) is better because it works for positive and neg numbers (-11, 11)
            cout << "This is a great number";
        else 
        {
            if (last1 % 2 == 1 || last2 % 2 == 1 || last3 % 2 == 1)
                cout << "This is a good number";
            else
                cout << "This is a bad number";
        }


    }

    return 0;
}
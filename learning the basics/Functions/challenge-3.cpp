// ● Develop a function that allows user to do the following (menu options):
// ○ Add 2 numbers
// ○ Subtract 2 numbers
// ○ Multiply 2 numbers
// ○ Divide 2 numbers
// ○ End the program
// ● Consider the following functions:
// ○ Function to read 2 double numbers - by reference
// ○ 4 functions, one for each operation. Don’t divide by zero!
// ○ Function to display the menu of the 5 options - read number and return it.
// ■ User should enter number from 1 to 5. If not, display error message
// ■ If exit, end the program by printing how many operations were done
#include<iostream>
using namespace std;

double sum(double a, double b){
    return a + b;
}
double subs(double a, double b){
    if (a>b)
        return a - b;
    else
        return b - a;
}
double multi(double a, double b){
    return a * b;
}
double divide(double a, double b){
    if (b==0)
        cout << "can't divide by zero";
    else
        return a / b;
}

int main () {
    int choice;
    cout<<"1. Add 2 numbers :\n";
    cout<<"2. Subtract 2 numbers :\n";
    cout<<"3. Multiply 2 numbers :\n";
    cout<<"4. Divide 2 numbers :\n";
    cout<<"5. End the program\n";
    bool is_continue = true;
    int count= 0;
    while (is_continue){
        int a,b;
        cin >> choice;
        if (choice == 1){
            cin >> a >> b;
            cout << sum(a, b);
            count++;
        }
        else if (choice == 2){
            cin >> a >> b;
            cout << subs(a, b);
            count++;

        }
        else if (choice == 3){
            cin >> a >> b;
            cout << multi(a, b);
            count++;

        }
        else if (choice == 4){
            cin >> a >> b;
            cout << divide(a, b);
            count++;
        }
        else if (choice == 5){
            cout << count;
            is_continue = false;
        } 
        else{
            cout << "Invalid Choice.";
            continue;
        }
    }
}
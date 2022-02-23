// ● Implement fibonacci: Int fibonacci(int n)
// ○ Recall fibonacci sequence: 1 1 2 3 5 8 13 21 35
// ○ E.g. fibonacci(6) = 13
// ○ Recall that: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2). E.g. fib(6) = fib(5)+fib(4) =13
// ■ So it calls 2 subproblems of its type
// ● Can u compute fibonacci(40)? fibonacci(50)? Why? Any work around? Hint: Array
#include<iostream>
using namespace std;


int fibonacci(int n){
    if (n <= 1)
        return 1;
        
    return  fibonacci(n - 1) + fibonacci(n- 2);

}

int main() {
    cout << fibonacci(8);
}

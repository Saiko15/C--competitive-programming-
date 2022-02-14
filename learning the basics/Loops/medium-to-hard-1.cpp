// ● Read an Integer N, then print an X using * as following
// ○ N always odd

#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i <= N; ++i)
    {
        for (int j=0; j <= N; ++j)
        {
            if (j == i || N-i-1==j)
                cout << "*";
            else 
                cout << " ";
        }
        cout << "\n";
    }
}

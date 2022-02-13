// ● Read integer N, followed by reading N numbers. Print 2 values
// ○ The average of the numbers in odd positions (1st, 3rd, 5th, …)
// ○ The average of the numbers in even positions (2nd, 4th, 6th, …)
// ● Input
// ○ 6 10 100 20 200 30 600
// ● Output
// ○ 20 300
// ● Explantation
// ○ (10+20+30)/3 = 20
// ○ (100+200+600)/3 = 300

#include<iostream>
using namespace std;

int main() {
    int N, odd_count, even_count, odd_sum, even_sum;
    odd_sum = 0, even_sum = 0;
    cin >> N;
    even_count = N / 2;
    odd_count = N - even_count;
    while (N>0)
    {
        int num;
        cin>>num;
        if (N % 2 == 0)
            even_sum += num; 
        else 
            odd_sum += num;
        N--;
    }
    cout << odd_sum / odd_count << " " << even_sum / even_count;
    return 0;
    
}
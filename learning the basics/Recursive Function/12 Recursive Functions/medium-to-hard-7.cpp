// ● Int count_primes(int start, int end);
// ○ Compute how many primes between start & end, inclusive indices
// ● Don’t use loops at all
// ● Input
// ○ 10 20 ⇒ 4
// ○ 10 200 ⇒ 42
// ● Can u compute answer for [10, 5000000]? 
#include<iostream>
using namespace std;

int count_primes(int start, int end, int pos, int count ){
        if(start > end)
            return count;
        else if (start == pos)
            return count_primes(start + 1, end, pos, count + 1);
        else if(start % pos == 0)
            return count_primes(start+1, end, pos, count);
        else if(start % 2 != 0)
            return count_primes(start, end, pos + 1, count);
}

int main() {
    cout << count_primes(10,20, 2, 0);
}
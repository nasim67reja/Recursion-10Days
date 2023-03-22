#include <iostream>
using namespace std;

////////////////// 👉👉👉👉👉👉👉 Recursion Day 1

// Q-1: Factorial
int factorial(int n)
{
    if (n == 0)
        return 1;

    int val = factorial(n - 1);
    int res = n * val;
    return res;
}

int main()
{
    // int n;
    // cin >> n;
    // cout << isPowerOfTwo(n) << endl;
    cout << "Hello world" << endl;

    return 0;
}
#include <iostream>

using namespace std;

// Problem 1 : Reverse String using two pointer

string reverse_str(string s, int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++, end--;
    }
    return s;
}

// Using Recursion
void reverse_strRecursion(string &str, int s, int e)
{
    // base case
    if (s > e)
        return;
    swap(str[s], str[e]);
    s++, e--;
    // Recursive call
    reverse_strRecursion(str, s, e);
}

// using one value

void reverse_strRecursionAlt(string &str, int s)
{
    int n = (str.size() - 1);
    n = n - s;
    // base case
    if (s > n)
        return;
    swap(str[s], str[n]);
    s++, n--;
    // Recursive call
    reverse_strRecursionAlt(str, s);
}

//////// 👉👉👉👉👉👉 Check Palindrom

// using two pointer

bool check_palindrome(string str, int size)
{
    int s = 0, e = size - 1;
    while (e > s)
    {
        if (str[s] != str[e])
            return false;
        s++, e--;
    }
    return true;
}

// using recursion

bool check_palindrome_rec(string str, int s, int e)
{
    if (s > e)
        return true;
    if (str[s] != str[e])
        return false;
    else
        return check_palindrome_rec(str, s + 1, e - 1);
    return true;
}

int main()
{

    string str;
    cout << "Input any string ";
    cin >> str;
    if (check_palindrome_rec(str, 0, str.size() - 1))
        cout << str << " is palindrome" << endl;
    else
        cout << str << " is not palindrome" << endl;

    // reverse_strRecursionAlt(str, 0);
    // cout << "string reverse str " << str << endl;

    return 0;
}
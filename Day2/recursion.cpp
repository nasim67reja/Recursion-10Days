#include <iostream>

using namespace std;

////////////////// 👉👉👉👉👉👉👉 Recursion Day 1

// Q-1: checking sorted array

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
// Q:2 sum of a array
int sum(int arr[], int size)
{

    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    int remainingPart = sum(arr + 1, size - 1);

    return arr[0] + remainingPart;
}

// Q:3 Search an element from an array with recursion using linear search

bool findEl(int arr[], int size, int k)
{

    if (size == 0)
        return false;
    if (arr[0] == k)
        return true;
    return findEl(arr + 1, size - 1, k);
}

// Q:3 Search an element from an array with recursion using Binary search
bool binarySearch(int arr[], int s, int e, int k)
{
    // base case
    if (s > e)
        return false;
    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
        return binarySearch(arr, mid + 1, e, k);
    else
        return binarySearch(arr, s, mid - 1, k);
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;

    cout << binarySearch(arr, 0, size - 1, 4);

    return 0;
}
#include <iostream>
using namespace std;

////// 👉👉👉👉👉👉   Problem 1: Checking array sorting or not using recursion

bool isSorted(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, size - 1);
}

//////// 👉👉👉👉👉👉👉 Problem 2 : Calculating Sum

int sum(int *arr, int size)
{

    // Base case: if the size of the array is 0, return 0
    if (size == 0)
        return 0;
    // Recursive case: add the first element to the sum of the rest of the array
    else
        return arr[0] + sum(arr + 1, size - 1);
}

/////////////////// 👉👉👉👉👉👉👉👉 Searching //////////////////////////
// int search(int *arr, int size, int key)
// {
//     int s = 0, e = size - 1, mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] == key)
//             return mid;
//         if (key > arr[mid])
//             s = mid + 1;
//         else
//             e = mid - 1;
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }

//  👇👇👇👇👇  Using recursion

// 🐵🐵🐵 linear
bool search_recursion(int arr[], int size, int key)
{
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    else
        return search_recursion(arr + 1, size - 1, key);
}

// 🐵🐵🐵 binary
bool binary_search(int *arr, int s, int e, int k)
{
    // element not found
    if (s > e)
        return false;
    int mid = s + (e - s) / 2;

    // element found
    if (arr[mid] == k)
        return true;
    if (arr[mid] < k)
        return binary_search(arr, mid + 1, e, k);
    else
        return binary_search(arr, s, mid - 1, k);
}

int main()
{
    int myArray[5] = {1, 2, 3, 7, 5};

    bool isPresent = binary_search(myArray, 0, 5, 6);
    if (isPresent)
        cout << "key is Present" << endl;
    else
        cout << "Key is not Present" << endl;
    // bool res = search_recursion(myArray, 5, 5);
    // if (res)
    //     cout << "key is present in array" << endl;
    // else
    //     cout << "Key is not present in the array" << endl;
    // cout << search(myArray, 5, 7) << endl;

    // int s = sum(myArray, 5);
    // cout << "The sumation of the array is " << s << endl;
    // bool ans = isSorted(myArray, 5);
    // if (ans)
    //     cout << "Array is sorted " << endl;
    // else
    //     cout << "Array is not sorted" << endl;
    return 0;
}
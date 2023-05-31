#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// int partition(int arr[], int s, int e)
// {

//     int pivot = arr[s];

//     int cnt = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= pivot)
//             cnt++;
//     }
//     int pivotIndex = s + cnt;
//     swap(arr[s], arr[pivotIndex]);

//     //
//     int i = s, j = e;
//     while (i < pivotIndex && j > pivotIndex)
//     {
//         while (arr[i] < pivot)
//             i++;
//         while (arr[j] > pivot)
//             j--;
//     }
//     if (i < pivotIndex && j > pivotIndex)
//         swap(arr[i++], arr[j--]);
//     return pivotIndex;
// }
// void quickSort(int arr[], int s, int e)
// {
//     // base case
//     if (s < e)
//     {
//         int pivot = partition(arr, s, e);

//         // Recursive calls to sort the sub-arrays
//         quickSort(arr, s, pivot - 1);
//         quickSort(arr, pivot + 1, e);
//     }
// }

// void quickSort(int array[], int low, int high)
// {
//     if (low < high)
//     {
//         // Select the pivot element.
//         int pivot = array[high];

//         // Partition the array around the pivot.
//         int i = low - 1;
//         for (int j = low; j < high; j++)
//         {
//             if (array[j] <= pivot)
//             {
//                 i++;
//                 int temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }

//         // Place the pivot element in the correct position.
//         int temp = array[i + 1];
//         array[i + 1] = array[high];
//         array[high] = temp;

//         // Recursively sort the left and right subarrays.
//         quickSort(array, low, i);
//         quickSort(array, i + 2, high);
//     }
// }

// Function to swap two elements
// void swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// Function to partition the array and return the pivot index

int partition(int arr[], int low, int high)
{
    // Choosing the pivot
    int pivot = arr[high];

    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {

        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {

            // Increment index of smaller element
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Function to perform QuickSort recursively
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);

        // Recursive calls to sort the sub-arrays
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main()
{

    int arr[5] = {10, 80, 30, 90, 40};
    int n = 5;
    quickSort(arr, 0, n - 1);
    cout << "Sorted Array" << endl;
    for (auto val : arr)
        cout << val << " ";

    // cout << endl;
    return 0;
}

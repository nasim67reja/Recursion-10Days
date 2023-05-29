#include <iostream>
using namespace std;

// merge sort

void merge(int arr[], int s, int mid, int e)
{
}

void mergeSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int mid = s - (e - s) / 2;

        // Sort first and second halves
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);

        // Merge the sorted halves
        merge(arr, s, mid, e);
    }
}
int main()
{
    int arr[6] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    return 0;
}
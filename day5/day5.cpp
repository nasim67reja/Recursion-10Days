#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// merge sort

void merge(int arr[], int s, int mid, int e)
{
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int temp1[n1], temp2[n2];

    // copy element
    for (int i = 0; i < n1; i++)
        temp1[i] = arr[s + i];
    for (int j = 0; j < n2; j++)
        temp2[j] = arr[mid + 1 + j];

    // cheking the temp array correctly working or not
    // cout << "execution" << endl;
    // cout << "first array ";
    // for (auto val : temp1)
    //     cout << val << " ";
    // cout << endl;
    // cout << "second array ";
    // for (auto val : temp2)
    //     cout << val << " ";
    // cout << endl;

    // Merge the sorted array
    int i = 0, j = 0, k = s;
    while (i < n1 && j < n2)
    {
        if (temp1[i] <= temp2[j])
        {
            arr[k] = temp1[i];
            i++;
        }
        else
        {
            arr[k] = temp2[j];
            j++;
        }
        k++;
    }

    // copy if temp1 element exist
    while (i < n1)
    {
        arr[k] = temp1[i];
        i++, k++;
    }

    // copy if temp2 element exist
    while (j < n2)
    {
        arr[k] = temp2[j];
        j++, k++;
    }
}

void mergeSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int mid = s + (e - s) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}

int main()
{

    // vector<int> v = {6, 5, 4, 3, 2, 1};
    // cout << "Before sorting " << endl;
    // for (auto val : v)
    //     cout << val << " ";
    // vector<int> vp = sortArray(v);
    // cout << endl;
    // cout << "After sorting " << endl;
    // for (auto val : vp)
    //     cout << val << " ";

    int arr[6] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    for (auto val : arr)
        cout << val << " ";
    return 0;
}

// 👉👉👉👉👉👉👉👉 912. Sort an Array

// void mergeV(vector<int> &nums, int s, int mid, int e)
// {

//     int n1 = mid - s + 1;
//     int n2 = e - mid;
//     vector<int> temp1(n1);
//     vector<int> temp2(n2);

//     // copy element
//     for (int i = 0; i < n1; i++)
//         temp1[i] = nums[s + i];
//     for (int j = 0; j < n2; j++)
//         temp2[j] = nums[mid + 1 + j];

//     // Merge the sorted array
//     int i = 0, j = 0, k = s;
//     while (i < n1 && j < n2)
//     {
//         if (temp1[i] <= temp2[j])
//         {
//             nums[k] = temp1[i];
//             i++;
//         }
//         else
//         {
//             nums[k] = temp2[j];
//             j++;
//         }
//         k++;
//     }

//     // copy if temp1 element exist
//     while (i < n1)
//     {
//         nums[k] = temp1[i];
//         i++, k++;
//     }

//     // copy if temp2 element exist
//     while (j < n2)
//     {
//         nums[k] = temp2[j];
//         j++, k++;
//     }
// }
// void mergeSortV(vector<int> &nums, int s, int e)
// {
//     if (s < e)
//     {
//         int mid = s + (e - s) / 2;
//         mergeSortV(nums, s, mid);
//         mergeSortV(nums, mid + 1, e);
//         mergeV(nums, s, mid, e);
//     }
// }
// vector<int> sortArray(vector<int> &nums)
// {
//     mergeSortV(nums, 0, nums.size() - 1);
//     return nums;
// }
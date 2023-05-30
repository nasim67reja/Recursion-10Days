# MERGE SORT

![Merge Sort](./public/Merge-Sort.png)

- Like [QuickSort](https://www.geeksforgeeks.org/quick-sort/), Merge Sort is a [Divide and Conquer](https://www.geeksforgeeks.org/introduction-to-divide-and-conquer-algorithm-data-structure-and-algorithm-tutorials/) algorithm. It divides the input array into two halves, calls itself for the two halves, and then it merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.

## Pseudocode :

- Declare left variable to 0 and right variable to n-1
- Find mid by medium formula. mid = (left+right)/2
- Call merge sort on (left,mid)
- Call merge sort on (mid+1,rear)
- Continue till left is less than right
- Then call merge function to perform merge sort.

## Algorithm

Step 1: Start
Step 2: Declare an array and left, right, mid variable
Step 3: Perform merge function.
mergesort(array,left,right)
mergesort (array, left, right)
if left > right
return
mid= (left+right)/2
mergesort(array, left, mid)
mergesort(array, mid+1, right)
merge(array, left, mid, right)
Step 4: Stop

## MergeSort(arr[], l, r)

If r > l

- Find the middle point to divide the array into two halves:
  - middle m = l + (r – l)/2
- Call mergeSort for first half:
  - Call mergeSort(arr, l, m)
- Call mergeSort for second half:
  - Call mergeSort(arr, m + 1, r)
- Merge the two halves sorted in step 2 and 3:
  - Call merge(arr, l, m, r)

## Here is my merge sort code

```cpp
#include <iostream>
using namespace std;

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
    int arr[6] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    for (auto val : arr)
        cout << val << " ";
    return 0;
}
```

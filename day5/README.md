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

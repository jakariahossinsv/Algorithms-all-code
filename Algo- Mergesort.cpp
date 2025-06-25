#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000;  // Maximum size for the array and temp arrays

// Merges two subarrays of arr[].
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays with maximum possible size
    int leftArr[MAX], rightArr[MAX];

    // Copy data to temp arrays
    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[left..right]
    i = 0; j = 0; k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    // Copy remaining elements of leftArr[], if any
    while (i < n1)
        arr[k++] = leftArr[i++];

    // Copy remaining elements of rightArr[], if any
    while (j < n2)
        arr[k++] = rightArr[j++];
}

// Recursive merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {20, 11, 16, 5, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    // Output the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

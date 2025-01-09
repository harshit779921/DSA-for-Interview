#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;

    // Merging two sorted halves
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++; // Increment j to avoid infinite loop
        }
    }

    // Remaining elements in the left half
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // Remaining elements in the right half
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy temp elements back to the original array
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[start + idx] = temp[idx];
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        // Sort the left half
        mergeSort(arr, start, mid);
        // Sort the right half
        mergeSort(arr, mid + 1, end);
        // Merge the two sorted halves
        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[] = {12, 31, 35, 8, 32, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}

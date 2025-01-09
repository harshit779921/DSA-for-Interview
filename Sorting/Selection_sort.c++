#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallInd = i; //unsorted part starting
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallInd])
            {
                smallInd = j;
            }
        }
        swap(arr[i], arr[smallInd]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    selectionSort(arr, n);
    printArray(arr, n);
}
#include <bits/stdc++.h>
using namespace std;
int secondlargestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    int secondL = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondL = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && arr[i] > secondL)
        {
            secondL = arr[i];
        }
    }
    return secondL;
}

int main()
{
    int n;
    cout << "Enter the Number of element:";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << secondlargestElement(arr, n);
}
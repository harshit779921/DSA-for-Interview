#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            cout << arr[i];
        }
    }
    return largest;
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
    largestElement(arr, n);
}
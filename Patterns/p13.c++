#include <iostream>
using namespace std;
int print11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = start+1;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print11(n);
}
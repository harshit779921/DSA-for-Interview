#include <iostream>
using namespace std;
void print19(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        // Star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        // Star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space = space + 2;
    }
    space = 8;
    for (int i = 1; i <= n; i++)
    {
        // Star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        // Star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space = space - 2;
    }
}

int main()
{
    int n;
    cin >> n;
    print19(n);
}
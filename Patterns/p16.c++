#include <iostream>
using namespace std;
int print16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print16(n);
}
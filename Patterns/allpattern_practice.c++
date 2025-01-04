#include <iostream>
using namespace std;
void print23(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print24(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void print25(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print26(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
void print27(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void print28(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void print29(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void print30(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            
        }
        cout << endl;
        ch++;
    }
}
int main()
{
    int n;
    cin >> n;
    print30(n);
}
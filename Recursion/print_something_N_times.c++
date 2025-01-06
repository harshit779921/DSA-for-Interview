#include <iostream>
using namespace std;
int cnt = 0;
void recur()
{
    if (cnt == 3)
        return;
    cout << cnt << endl;
    cnt++;
    recur();
}

int main()
{
    recur();
    return 0;
}
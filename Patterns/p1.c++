#include <iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     for(int i = 0 ; i <n;i++){
//         for(int j = 0; j<n; j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     return 0;
// }

int print1(int n){
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin>> n;
    print1(n);
}
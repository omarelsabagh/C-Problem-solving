#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[10];

    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    for (int i =0 ; i<n ; i++)
        if (arr[i] == 1)
        {
            cout << -1 << endl;
            return 0;
        }
    cout << 1 << endl;
    return 0;
}
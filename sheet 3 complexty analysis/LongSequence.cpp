#include <iostream>
#include <cmath>
using namespace std;

int main() {
 


    int n;
    cin >> n;

    int arr[5];
    long long sum = 0;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        sum += arr[i];
    }

    long long x;
    cin >> x;
    long long number_of_completed_arrays = x / sum;
    long long y = x - sum * number_of_completed_arrays;

    int idx = -1;
    for(int i = 0; i < n; ++i){
        y -= arr[i];
        if(y < 0) {
            idx = i;
            break;
        }
    }



    long long ans = n * number_of_completed_arrays + idx + 1;
    cout << ans << '\n';


    return 0;
}


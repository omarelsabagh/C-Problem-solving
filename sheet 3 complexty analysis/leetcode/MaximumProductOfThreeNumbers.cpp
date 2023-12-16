#include <iostream>
#include <algorithm>
using namespace std;

int main(){


    int arr[6] = {-100,-98,-1,2,3,4}; //39200

    int product1;
    int product2;
    sort(arr, arr + 6);
    product1 = arr[0] * arr[1] * arr[5];
    product2 = arr[5] * arr[4] * arr[3];

    cout<<"product1: "<<product1<<endl;
    cout<<"product2: "<<product2<<endl;

    
    return 0;
}


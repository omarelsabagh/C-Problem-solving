#include <iostream>
#include <deque>
using namespace std;

int main(){
int n, d;
cin>> n;
cin>> d;

deque <int> arr(n);

for (size_t i = 0; i < n; i++){
    cin>> arr[i];
}

for (size_t i = 0; i < d; i++){
    int firstElement = arr[0];
    arr.pop_front();
    arr.push_back(firstElement);
}




for (size_t i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}

    
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    //time complixty O(1)

    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;

    swap(a,b);
    swap(a,c);

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}
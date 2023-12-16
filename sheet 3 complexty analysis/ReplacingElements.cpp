#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    //time complixty O(n^2 log(n))

    int t;
    cin>>t;

    for(int i =0 ; i < t ; i++){
        int size;
        int d;
        cin>>size;
        cin>>d;
        int arr[10];
        for(int j=0 ; j<size ; j++){
         cin>>arr[j];
        }

        sort(arr, arr + size);
        int counter = 0;
        for(int j=0 ; j<size ; j++){
         if(arr[j]>d){
            counter++;
         }
        }

        if(counter==0){
          cout<<"YES"<<endl;
        }else{
       if(arr[0]+ arr[1] <= d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
 
     
    }

    /*
      if the sum of any 2 number of the array <= d ==> YES
      else ==> NO
    */
    return 0;
}
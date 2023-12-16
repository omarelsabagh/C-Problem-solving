#include <iostream>
using namespace std;

int main(){



    int n = 1;
    int arr[5] = {0,0,1,0,0};
      int resizedArr[5+2];
    resizedArr[0]= 0;
    resizedArr[5+1]= 0;
    int counter =0;
   
        for(int i =0 ; i< 5; i++){
          resizedArr[i+1]=arr[i];
        }
        
         for(int i =1 ; i< 5+1; i++){
           if(resizedArr[i-1]==0 && resizedArr[i+1]==0 && resizedArr[i]==0){
            counter++;
            i++;
           }
        }

        if(counter >= n){
            return true;
        }else{
            return false;
        }
        



    return 0;
}

/*
[0,1,0] count=2 n=0

[0,0,1,0,0] count=4 n=2

[0,0,0,1,0,0,0] count=6 n=2

[0,0,0,0,1,0,0,0,0] count=8 n=4

[0,0,0,0,0,1,0,0,0,0,0] count=10 n=4

[0,0,0,0,0,0,1,0,0,0,0,0,0] count=12 n=6

[0,0,0,0,0,0,0,1,0,0,0,0,0,0,0] count=14 n=6
========================================

count/2 -1

[1,0,0,0,0,0,1,0,1] count=6 n=2

[1,0,0,0,0,0,0,0,1,0,1] count=8 n=3

[1,0,0,0,1,0,1] count=4 n=1 

[1 0 0] count=2 n=1

======================
[1 0 0 0 0 1] count=4 n=0

*/
#include <iostream>
#include <cmath>


using namespace std;

int main(){

    int size, c;

    cin>>size;
    cin>>c;

   int max = 0;
   int idx;

    for(int i =1 ; i <= size ; i++){
        int num;
        cin>>num;
        int foo = ceil(float(num) /c);
   
        if(foo >= max){
          max = foo;
          idx = i;
        }
 
    }
  
    cout<< idx << endl;

    return 0;
}


/*
5 2
1 3 1 4 2

3 4 

7 3
5 2 8 7 1 6 3
2 8 7 1 6 3 5(2)
8 7 1 6 3 5(2)
7 1 6 3 5(2) 8(5)
1 6 3 5(2) 8(5) 7(4)
6 3 5(2) 8(5) 7(4)
3 5(2) 8(5) 7(4) 6(3)
5(2) 8(5) 7(4) 6(3)
8(5) 7(4) 6(3)
7(4) 6(3) 8(2)
6(3) 8(2) 7(1)




*/
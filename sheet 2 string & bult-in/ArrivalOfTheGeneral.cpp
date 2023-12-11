#include <iostream>

using namespace std;

int main(){

//inputs
int n;
cin>>n;

int max = 0;
int maxindex =0;

int min = 101;
int minindex =0;

for(int i = 0 ; i<n ; i++){
    int num;
    cin>>num;

        if(num> max){
        max = num;
        maxindex = i;
    }
        if(num<= min){
        min = num;
        minindex = i;
    }



}
    int maxtime =  maxindex -1;
int mintime;
if(maxindex > minindex){
    mintime = n - ++minindex;
}else{
mintime = n - minindex;
}

//output
cout<<maxtime + mintime<<endl;

    return 0;
}

/*
maxidx = 1

minidx = 3


7
0  1  2  3  4  5  6
10 76 58 10 63 40 31

maxtime = 1
*/
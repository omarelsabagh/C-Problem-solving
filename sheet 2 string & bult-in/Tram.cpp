#include <iostream>

using namespace std;

int main(){

//inputs
int stops;
int leave;
int enter;

cin>>stops;

int max = 0;
int insideTrain = 0;

//solution
for(int i = 0 ; i< stops ; ++i){
cin>> leave;
cin >> enter;
    insideTrain = insideTrain + enter - leave;
    if(insideTrain > max){
        max = insideTrain;
    }
}

//output
cout << max << endl;

    return 0;
}
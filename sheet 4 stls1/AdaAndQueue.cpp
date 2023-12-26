#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(){

    long long queries;
    cin>>queries;

    deque <int> q1;
 
    for(int i=0;i<queries;i++){
        string command;
        int num;
        cin>>command;
        if(command == "toFront" || command == "push_back"){    
            cin>>num;
        }
        if(command == "toFront"){
             q1.push_front(num);

        }else if(command == "push_back"){
            q1.push_back(num);

        }else if(command == "front"){
           if(!q1.empty()){
           cout<< q1.front()<<endl;
           q1.pop_front();

           }else{
            cout<<"No job for Ada?"<<endl;

           } 

        }else if(command == "back"){
            if(!q1.empty()){
            cout<< q1.back()<<endl;
            q1.pop_back();
            }else{
             cout<<"No job for Ada?"<<endl;
            }

        }else if(command == "reverse"){
          reverse(q1.begin(),q1.end());
        }



    }

    
    return 0;
}

/*
q1 1 2 3 4
q2 
*/
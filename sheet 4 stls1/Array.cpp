#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n;
    cin>>n;
    deque <int> pos;
    deque <int> neg;
    deque <int> zero;
    for(int i = 0 ; i < n ; i++){
        int num;
        cin>>num;
        if(num > 0){
            pos.push_back(num);
        }else if(num < 0){
            neg.push_back(num);
        }else{
            zero.push_back(num);
        }
    }

      if(pos.empty()){
          pos.push_back(neg.at(neg.size() - 1));
          pos.push_back(neg.at(neg.size() - 2));
          neg.erase(neg.begin() + neg.size() - 1);
          neg.erase(neg.begin() + neg.size() - 1);
    }

    if(neg.size() % 2 ==0){
        zero.push_back(neg.at(neg.size() - 1));
        neg.erase(neg.begin() + neg.size() - 1);
      
    }



    cout<<neg.size()<<" ";
    for (int i = 0; i < neg.size(); i++) {
        cout<< neg.at(i) << " ";
    }
    cout<<endl;

        cout<<pos.size()<<" ";
    for (int i = 0; i < pos.size(); i++) {
        cout<< pos.at(i) << " ";
    }
    cout<<endl;

        cout<<zero.size()<<" ";
    for (int i = 0; i < zero.size(); i++) {
        cout<< zero.at(i) << " ";
    }

    return 0;
}


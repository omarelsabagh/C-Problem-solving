#include <iostream>
#include <string>

#include <stack>
using namespace std;

int main(){
    string s = "";
    int ops;
    cin>>ops;

    stack <pair<int, string>> history;

    string deletedString;
    

    for(int i=0; i < ops ; i++){
        int opNumber;
        string opArg;

        cin>> opNumber;
        if(opNumber != 4){
          cin>> opArg;
        }
       
   if(opNumber == 1){
    s+= opArg;
   } 
   else if(opNumber == 2){
    deletedString = s.substr(s.length() - stoi(opArg), stoi(opArg));
    s.erase(s.length() - stoi(opArg), stoi(opArg));
   }
   else if(opNumber == 3){
    cout<<s[stoi(opArg) - 1]<<endl;
   }
   else{


    if(history.top().first == 1){ 

    s.erase(s.length() - history.top().second.length(), history.top().second.length());

    }else if(history.top().first == 2){

    s.insert(s.length() , history.top().second);
 
    }
        history.pop();

   }
   if(opNumber == 1){
     history.push({opNumber, opArg});
   }else if(opNumber == 2){
     history.push({opNumber, deletedString});
   }
     
    }
    

    return 0;
}


/*



*/
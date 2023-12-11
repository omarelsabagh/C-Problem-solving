#include <iostream>
#include <string>

using namespace std;

int main(){

//inputs
string s;

cin>>s;
//solution
string time =  s.substr(0,2);

int timeInHours = stoi(time);



//output
if(s[s.length()-2] == 'P'){
     if(timeInHours == 12){
cout<<timeInHours<<s.substr(2,s.length() - 4)<<endl;
    }else{
cout<<timeInHours + 12<<s.substr(2,s.length() - 4)<<endl;
    }

}else{
    if(timeInHours == 12){
cout<<"00"<<s.substr(2,s.length() - 4)<<endl;
    }else{
cout<<s.substr(0,s.length() - 2)<<endl;
    }

}

    return 0;
}
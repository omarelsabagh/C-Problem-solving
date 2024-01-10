#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<char> keyboard = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
  char direction;
  cin>>direction;

  string s;
  cin>>s;

  string output = "";

  for(int i = 0 ; i < s.length() ; i++){
      for(int j = 0 ; j < keyboard.size() ; j++){
        if(s[i] == keyboard[j] && direction == 'R'){
            output += keyboard[j-1];
        }else if(s[i] == keyboard[j] && direction == 'L'){
            output += keyboard[j+1];
        }
      }
  }

cout<<output<<endl;
    
    return 0;
}

//https://codeforces.com/problemset/problem/474/A
//https://codeforces.com/problemset/problem/1253/A
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tc;
    cin>> tc;

    for (int j = 0; j < tc; j++){
        int count;
        cin>>count;

        vector<int> a;
        vector<int> b;

        for (int i = 0; i < count; i++){
            int num;
            cin>>num;
            a.push_back(num);

        }
        
        for (int i = 0; i < count; i++){
            int num;
            cin>>num;
            b.push_back(num);
        }
        int start = 0;
        int end = 0;  
        for (int i = 0; i < count; i++){
         if(a[i] != b[i]){
            start = i;
            break;
         }
        }

        for (int i = count -1; i > 0; i--){
         if(a[i] != b[i]){
            end = i;
            break;
         }
        }

        bool check = true;

        if(start == end && b[start] - a[end] < 0){
            check = false;
        }
        for (int i = start; i < end; i++){
            int  k = b[i] - a[i];
            int  s = b[i+1] - a[i+1];

              if(k<0){
                check = false;
                break;
              } else if(s != k){
                check = false;
                break;
              }
        }



        if(check){
            cout<<"YES"<<endl;
          
        } else {
         cout<<"NO"<<endl;
        }


        
    }
     

    return 0; 
} 

/*
3
1 2 3
2 2 4

3
1 1 2
1 1 1

1
1
1
*/
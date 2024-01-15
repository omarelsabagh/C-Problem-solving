//https://codeforces.com/problemset/problem/337/A
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

 int students;
 cin>>students;

 int count;
 cin>>count;

 vector<int> v;

 for (int i = 0; i < count; i++){
    int pieces;
    cin>>pieces;
    v.push_back(pieces);
 }

sort(v.begin(), v.end());
int diff = v[v.size()-1] - v[0];

for (int i = 0; i < count; i++){
    // cout<<v[i + students - 1]<<" "<<v[i]<<endl;
    if(v[i + students -1] - v[i] < diff ){
    int temp = v[i + students - 1] - v[i];     
    if(temp < 0){
        break;
    }
    diff = temp; 
    }
}
cout<<diff<<endl;


    return 0;
}

/*
4 6
10 12 10 7 5 22
sort
5 7 8 10 12 22

2 10
4 5 6 7 8 9 10 11 12 12

4 25
226 790 628 528 114 64 239 279 619 39 894 763 763 847 525 93 882 697 999 643 650 244 159 884 190

sort
39 64 93 114 159 190 226 239 244 279 525 528 619 628 643 650 697 763 763 790 847 882 884 894 999
525 528 619 628 
25 - 4 = 21 odd

3 20
446 852 783 313 549 965 40 88 86 617 479 118 768 34 47 826 366 957 463 903

4 5
1 2000 3 5000 4 4000
1 3 4 2000 4000 5000
*/
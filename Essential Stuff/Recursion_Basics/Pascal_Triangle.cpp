/*
Here is the recursive code for Pascal Triangle.
Everyone knows what Pascal Triangle is, in the case you don't then
        1                  for n=0
       1 1                 for n=1
      1 2 1                for n=2
    1  3  3  1             for n=3
  1  4   6  4  1           for n=4
1  5  10  10  5  1         for n=5

Each term in each row is the coefficient of (x+y)^n
*/

#include<bits/stdc++.h>

using namespace std;

typedef vector<int> X;

int JustChecking(int n){
        
}

int main(){

    X one {1, 5, 10, 10, 5, 1};
    X two;
    X :: iterator it;

    for(int i=0; i<6; i++){
        if((i == 0) || (i == 5)){
            two.push_back(1);
        }
        else{
            two.push_back(one[i-1] + one[i]);
        }
    };

    for(it = two.begin(); it != two.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}
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

typedef vector<int> X; // why X? As I love to call vector as X :)

/*
The following function can give you (n+1)th of a Pascal Triangle
if you give it nth row. 
There is nothing to explain because it is apparently clear, that it sets 1
at both places start and end. Then does job in between.
*/
X JustChecking(X &V){
    X uv;
    for(int i=0; i<(V.size()+1); i++){
        if(i==0 || i==V.size()){
            uv.push_back(1);
        }
        else{
            uv.push_back(V[i-1] + V[i]);
        }
    }

    return uv;
}

/*
The following function uses `JustChecking` to recursively update the
value of `vector E`.
'X E = {1}' means if user gives you value of E then well, otherwise take
{1} as the base case and start.
*/
X PascalTriangle(int n, X E = {1}){
    if(n == 0){
        return E;
    }
    else{
        X PVect = JustChecking(E);
        return PascalTriangle(n-1, PVect);
    }
}


int main(){

    // vector iterator
    X :: iterator it;

    /*
    The below commented code is just for checking JustChecking function.
    */ 
    // X one {1};

    // X lucky = JustChecking(one);
    // X honey = JustChecking(lucky);

    // for(it = lucky.begin(); it != lucky.end(); it++){
    //     cout<<*it<<" ";
    // }
    // cout<<"\n";
    // for(it = honey.begin(); it != honey.end(); it++){
    //     cout<<*it<<" ";
    

    // Now comes the interesting part.
    X pig = PascalTriangle(8);
    for(it = pig.begin(); it != pig.end(); it++){
        cout<<*it<<" ";
    }


    return 0;
}
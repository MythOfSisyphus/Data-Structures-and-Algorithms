/*
Here is the recursive code for Pascal Triangle.
Everyone knows what Pascal Triangle is, in the case you don't then
        1                  for n=0
       1 1                 for n=1
      1 2 1                for n=2
    1  3  3  1             for n=3
  1  4   6  4  1           for n=4
1  5  10  10  5  1         for n=5

Each term in each row is the coefficient of (vector<int>+y)^n
*/

#include<iostream>
#include<vector>

using namespace std;

// Not very efficient way to get nth row of a pascal triangle,
vector<int> PascalTriangle_Iterative(const int& n){
    vector<int> result {1};

    for(int k=0; k<n; k++){
        vector<int> next_row(result.size()+1, 0);
        for(int i=0; i<=result.size(); i++){
            if(i==0 || i==result.size()) next_row[i] = 1;
            else{
                next_row[i] = result[i] + result[i-1];
            }
        }
        // updating result
        result = next_row;
    }
    return result;
}

// An efficient way to generate the nth row of pascal triangle.
// long long would not be sufficient for large values of n as we know that binomial
// coefficent grows very quickly
vector<long long> PascalTriangle_Optimized(const int& n){
    vector<long long> result(n+1, 1); // Intialize all elements as 1

    for(int i=1; i<n; i++){
        result[i] = result[i-1] * (n-i+1)/i; // Use previous element to get the next one.
    }

    return result;
}


int main(){

    vector<long long> ex_20 = PascalTriangle_Optimized(20);

    for(const long long& elem : ex_20){
        cout<<elem<<" ";
    }

    return 0;
}
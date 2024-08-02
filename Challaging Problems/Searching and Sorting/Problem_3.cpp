/*
Find common elements in three sorted arrays
*/
#include<bits/stdc++.h>

using namespace std;

vector<int> Common_Elements(vector<int>&A, vector<int>&B){
    vector<int> result;

    for(int i=0; i<A.size(); i++){
        for(int j=0; j<B.size(); j++){
            if(A[i] == B[j]){
                result.push_back(A[i]);
            }
        }
    }
    return result;
}

/*
Problem is very simple and can be done just by 3 for loops
but here I'm using ranged-based for loop for better readability.

Why I wrote `const` in every loop? It is just because here we're 
assuring that value of i, j and k should not be changed throwout the loops.
*/
void Trying(vector<int>&A, vector<int>&B, vector<int>&C){
    for(const int& i : A){
        for(const int& j : B){
            if(i == j){
                for(const int&k : C){
                    if(j == k){
                        cout<<k<<" ";
                    }
                }
            }
        }
    }
}

int main(){

    vector<int>A {1, 3, 5, 7, 9, 11, 13, 15, 17};
    vector<int>B {5, 3, 11, 17, 19};
    vector<int>C {9, 13, 17, 19};

    vector<int> sol = Common_Elements(A, B);
    vector<int> sol_two = Common_Elements(sol, C);

    for(int i : sol_two){
        cout<<i<<" ";
    }

    cout<<"\n";
    Trying(A, B, C);


    return 0;
}
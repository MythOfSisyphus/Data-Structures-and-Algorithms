/*
Problem Statement: https://www.geeksforgeeks.org/backtracking-to-find-all-subsets/?ref=lbp
*/

#include<bits/stdc++.h>

using namespace std;

void getAllSubsets(vector<int>& A, vector<vector<int>>& res, vector<int>& subset, int index){
    
    res.push_back(subset);

    for(int i=index; i<A.size(); i++){
        subset.push_back(A[i]);

        getAllSubsets(A, res, subset, i+1);

        subset.pop_back();
    }
}

vector<vector<int>> printSubsets(vector<int>& A){
    vector<vector<int>> res;
    vector<int> subset;
    int index = 0;

    getAllSubsets(A, res, subset, index);

    return res;
}

int main(){
    
    vector<int> A {1, 2, 3, 4, 5};

    vector<vector<int>> S = printSubsets(A);
    for(int i=0; i< S.size(); i++){
        for(int j=0; j<S[i].size(); j++){
            cout<<S[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
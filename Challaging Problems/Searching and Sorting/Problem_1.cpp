/*
Permute two arrays such that sum of every pair is greater than or equal to K
https://www.geeksforgeeks.org/permute-two-arrays-sum-every-pair-greater-equal-k/

C++'s inbuild sort function is defined on vector V as
sort(V.begin(), V.end()) which sorts V in non-decreasing order
but if you want to sort it in a reversed way means non-increasing order
then use sort(V.begin(), V.end(), greater<int>())
*/

#include<bits/stdc++.h>

using namespace std;

bool isPossible(vector<int>&A, vector<int>&B, int k){
    // sorting A and B in non-decreasing order
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // adding least and greatest element of A and B
    for(int i=0; i<A.size(); i++){
        if((A[i] + B[A.size()-1-i]) < k){
            return false; // if any pair is less than k
        }
    }
    return true; // if all is well hehe
}

int main(){

    vector<int> a {7, 19, 25};
    vector<int> b {1, 20, 22};

    sort(a.begin(), a.end(), greater<int>());

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    // cout<<isPossible(a, b, 21);

    return 0;
}
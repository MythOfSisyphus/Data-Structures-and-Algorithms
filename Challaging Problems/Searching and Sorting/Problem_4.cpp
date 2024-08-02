/*
Minimum number of swaps required to sort an array
*/

#include<bits/stdc++.h>

using namespace std;

void MinSwaps(vector<int>& A){
    vector<int>:: iterator it;
    vector<int>:: iterator kt;

    for(int i=0; i<A.size()/2; i++){
        it = find(A.begin(), A.end(), i+1);
        swap(A[it-A.begin()], A[i]);

        kt = find(A.begin(), A.end(), A.size()-i);
        swap(A[it-A.begin()], A[A.size()-(i+1)]);
    }
}

int main(){

    vector<int> faults {6, 2, 1, 3, 5, 4};

    // min and max elements of vector using STL
    // cout<<&*min_element(faults.begin(), faults.end())<<"\n";
    // cout<<*max_element(faults.begin(), faults.end())<<"\n";

    // vector<int>:: iterator it;
    // vector<int>:: iterator jt;

    // it = find(faults.begin(), faults.end(), 1);
    // swap(faults[it-faults.begin()], faults[0]);
    
    // jt = find(faults.begin(), faults.end(), 6);
    // swap(faults[jt-faults.begin()], faults[5]);

    // it = find(faults.begin(), faults.end(), 3);
    // swap(faults[it-faults.begin()], faults[2]);
    
    // jt = find(faults.begin(), faults.end(), 4);
    // swap(faults[jt-faults.begin()], faults[3]);

    MinSwaps(faults);

    for(int i=0; i<faults.size(); i++){
        cout<<faults[i]<<" ";
    }


    return 0;
}
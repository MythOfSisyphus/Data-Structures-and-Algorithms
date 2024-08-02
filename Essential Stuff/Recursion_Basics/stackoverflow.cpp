/*
Here I'm gonna try to empty a vector using Recursion.
*/

#include<bits/stdc++.h>

using namespace std;

// recursion example from Vessle analogy.
template <typename T> void Vessle(vector<T> &A){
    if(A.size() == 0){
        cout<<"Kardiya vessle empty\n";
    }
    else{
        A.pop_back();
        Vessle(A);
    }
}

// for T not equal to string and char.
template <typename T> void Sum_Elements(vector<T> &A, int i=0){
    if(i==A.size()){
        cout<<"\nKardiya sabko update\n";
    }
    else{
        A[i] += A[(i+1)%A.size()];
        Sum_Elements(A, i+1);
    }
}

// sum of all elements of a vector using recursion
// for T not equal to string and char.
template <typename T> T Sum_of_All(vector<T> &A){
    if(A.size() == 0){
        return 0; // base case returns 0 when vector is empty
    }
    else{
        T temp = A.back(); // getting the last element
        A.pop_back(); // removing the last element
        return temp + Sum_of_All(A); // recursive call
    }
}

// Fibonnaci Series using recursion
int fib(int n){
   int prev = 1; // base case 1
   int current = 1; // base case 2
   int next = prev + current;

   for(int i=0; i<n-2; i++){
    prev = current;
    current = next;
    next = prev + current;
   }
   return current;
}

void fib_series(int n){
    vector<long long int> F(n, 0);
    for(int i=0; i<n; i++){
        if(i==0 || i==1){
            F[i] = 1;
        }
        else{
            F[i] = F[i-1] + F[i-2];
        }
    }

    for(int j=0; j<n; j++){
        cout<<F[j]<<" ";
    }

}

/*
Count Occurrences: Write a function to count the number of occurrences of a specific value in an array.
*/
int Occurrences(vector<int>& V, int n){
    if(V.size() == 0){
        return 0; // base case
    }
    else{
        if(V.back() == n){
            V.pop_back();
            return 1 + Occurrences(V, n); // counting 1 if last element is equal to n
        }
        else{
            V.pop_back();
            return Occurrences(V, n); // otherwise just move onto second last element
        }
    }
}

int main(){
    /*
    // examples of Vessle function
    vector<string> names {"lucky", "harry", "rohan", "shubham", "ayan"};
    Vessle<string>(names);

    vector<int> marks {94, 200, 300, 87, 80};
    Vessle<int>(marks);
    */

// example of Sum_Elements function
    vector<int> nums = {1, 3, 5, 7, 9};
    // Sum_Elements<int>(nums);

    // for(int i=0; i<nums.size(); i++){
    //     cout<<nums[i]<<" ";
    // }

    vector<double> newNums {1.6, 0.4, 0.1, 0.07, 11.19};
    // double jk = Sum_of_All(newNums);
    // cout<<jk<<" ";

    // int jk_2 = Sum_of_All(nums);
    // cout<<jk_2<<" ";

    // fib_series(30);
    // cout<<"\n";
    // int checker = fib(8);
    // cout<<checker;

    vector<int> numbers {1, 3, 5, 3, 5, 1, 5, 2};
    int count = Occurrences(numbers, 5);
    cout<<count;
    
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

/*
whenever we want to return a vector or an array from the recursive function then we'll have
to do as we did in the following function, see how we defined `result` vector.
*/

// trynna get sum of two consecutive elements of a vector recursively
template <typename T> vector<T> sumConsecutive(vector<T> &Vec, int index){
    // Base case: if the index reaches the second last element, return an empty vector
    if(index >= Vec.size() - 1){
        return {};
    }

    // calculate the sum of current element and next element
    T sum = Vec[index] + Vec[index + 1];

    // recursive call for the next pair
    vector<T> result = sumConsecutive(Vec, index+1);

    // inserting sum at the beginning of the result
    result.insert(result.begin(), sum);

    return result;
}

/*
Here I'm gonna take one more example,
SUM OF NON-CONSECUTIVE PAIRS:
Modify the function to sum non-consecutive pairs where each element is taken from indices
that are a specific distance apart (e.g., sum(vec[i], vec[i+3])).

Base Case: The recursion stops when index reaches the last valid index (Vec.size() - 1),
ensuring we don't go out of bounds.
Index_plus Check: The check if (index_plus >= Vec.size()) ensures that if the second index
goes out of bounds, the function resets index_plus to index + 2 and increments index, 
thus moving to the next element.
*/

template <typename T> 
void sumNonConsecutive(vector<T> &Vec, vector<T> &result, int index = 0, int index_plus = 2){
    // if index reaches to the second last element the return an empty vector (why?)
    if(index >= Vec.size()-2){
        return;
    }

    // If index_plus goes beyond the vector size, reset index_plus and move to the next element in Vec
    if(index_plus >= Vec.size()){
        sumNonConsecutive(Vec, result, index + 1, index + 3);
    }

    else{
        // calculate the sum of current element and the element at index_plus
        T sum = Vec[index] + Vec[index_plus];
        result.push_back(sum);

        // recursive call to process the next pair with same index
        sumNonConsecutive(Vec, result, index, index_plus + 1);
    }
}

/*
We can also return `result vector` directly from the function here is how we can do it.
*/

template<typename T>
vector<T> sumNonConsecutive_two(vector<T> &Vec, int index = 0, int index_plus = 2){
    // Base case: if the index reaches the second last element then return an empty vector
    if(index >= Vec.size() - 1){
        return {};
    }

    vector<T> result;

    if(index_plus >= Vec.size()){
        result = sumNonConsecutive_two(Vec, index+1, index+3);
    }

    else{
        T sum = Vec[index] + Vec[index_plus];

        result.push_back(sum);

        vector<T> next_result = sumNonConsecutive_two(Vec, index, index_plus + 1);

        result.insert(result.end(), next_result.begin(), next_result.end());
    }

    return result;
}

// function for iterating a vector
template <typename T>
void print(vector<T> &A){
    for(auto& i : A){
        cout<<i<<" ";
    }
    cout<<endl;
}


int main(){

    vector<int> int_nums {1, 3, 71, 91, 79, 4, 7, 37, 41, 57};
    // print<int>(int_nums);

    // vector<double> double_nums {1.093, 3.984, 3.44, 0.981, 5.79};
    // print<double>(double_nums);

    // printing sum of consecutive numbers
    vector<int> tester;

    sumNonConsecutive<int>(int_nums, tester);
    print(tester);

    // vector<double> tester_2;
    // sumNonConsecutive<double>(double_nums, tester_2);
    // print(tester_2);

    vector<int> A {1, 2, 7, 11};
    vector<int> result = sumNonConsecutive_two<int>(int_nums);
    print(result);


    return 0;
}
/*
I find the `sliding window techniques` pretty interesting. 
You can read about it here https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/
*/
#include<iostream>
#include<vector>
#include<queue> // for priority queue
#include<algorithm> // for *max_element(....)

using namespace std;

// Just a naive approach
void Sliding_window(const vector<int>& Vec, const int& k){
    vector<int> result; // for storing maximum of window

    for(int i=0; i<Vec.size()-(k-1); i++){ // for loop index from some trial and error
        int y = *max_element(Vec.begin()+i, Vec.begin()+i+k); // getting maximum of elements in window
        result.push_back(y); // putting maximum in Values
    }
    // printing result (maximum value in each window of size k)
    for(const int &i : result){
        cout<<i<<" ";
    }
}

//---------------------------------------------------------------------
// Second approach Max-Heap i.e. priority queue
/*
Explanation: Priority queue approach is pretty interesting. As we know that in priority queue
element with highest priority queue remain on top. So here we are measuring priority of an element
by its value, we're storing elements of Vector in priority queue as (elem, index) pair. 
At first we push first k elements into the queue. The we print the element on the top which should
be the max element of the first k elements then we use for loop from i=k to i=Vec.size()-1 and in each
iteration we add new element in queue and print max element corresponding to that element's window.
*/
void MaxSubarray(const vector<int>& Vec, const int& k){
    priority_queue<pair<int, int>> result;
    // pushing first k elements in priority queue
    for(int i=0; i<k; i++){
        result.push({Vec[i], i});
    }
    // printing the max element of the first window
    cout<<result.top().first<<" ";

    for(int i=k; i<Vec.size(); i++){
        result.push({Vec[i], i}); // pushing new element in window
        // index of top element if outdated(simply means, if the top element is not from previous window) then remove it.
        while(result.top().second <= i-k){
            result.pop();
        }
        // now print the max element of the current window.
        cout<<result.top().first<<" ";
    }
}

int main(){

    vector<int> A {2, 3, 7, 9, 5, 1, 6, 4, 3};
    vector<int> V {10, 8, 0, 1, -1, 6, 11};

    MaxSubarray(A, 3);
    cout<<endl;
    MaxSubarray(V, 3);

    return 0;
}
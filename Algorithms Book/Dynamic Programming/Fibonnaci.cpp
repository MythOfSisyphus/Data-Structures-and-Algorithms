/*
There are many nice algorithms on Fibonnaci Sequence in Algorithms.
I'm just writing few. See Chapter 3 Dynamic Programming.
*/
#include<bits/stdc++.h>

using namespace std;

// tf -> term fibonnaci
// (I just named it "tf" because I love TensorFlow)
void tf(int n){
    int prev = 0;
    int next = 1;
    int curr;
    for(int i=0; i<n; i++){
        curr = prev;
        prev = next;
        next += curr;
    }
    cout<<next<<"\n";
}

int main(){

    tf(20);
    return 0;
}
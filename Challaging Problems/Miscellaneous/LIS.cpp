/*
This is first problem from the file "Few Challenging Problems.md".
Longest Increasing Sequence

##########
In the case if you don't exactly remember the proper vector syntax so
for 1D vecto<data type> name(cols, value)
for 2D vector<vector<data type>> name(rows, vector<data type>(cols, value))
##########

My approach is really very basic and you may have guess it already.
So first we'll select a element(ele) at index 0 then compare it to the next one
if next > ele(0) then we'll add next to our list then compare next vector of next
with next not with ele because we want increasing sequence. So we have to compare 
remaning elements of vector with most recently added vector in list.

Then do it for all elements of given vector then compare the size then print LIS among them.
Isn't it very basic.

But I really want to learn other methods as well so I'm going to and I'm very much aware with
the fact that my method is not at all optimized. 
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    // just a vector
    vector<int> vect{3, 1, 20, 49, 77, 29, 99};
    // vector<int> vect{99, -1, 0, 100, 88, 10, 200};

    // just a 2D vector to store all increasing seqs
    vector<vector<int>> allseqs(vect.size(), vector<int>(vect.size(), 0));

    // as I mentioned why 'count' and 'k'??
    for(int i=0; i<vect.size(); i++){
        allseqs[i][0] = vect[i];
        int count = 1;
        int k = i;
        // cout<<"k = "<<k<<"\n";
        for(int j=i+1; j<vect.size(); j++){
            if(vect[k] < vect[j]){
                allseqs[i][count] = vect[j];
                k = j;
                count += 1;
            }
        }
        count = 1;
    }

    // just printing using 'while' loop isn't it fancy??
    int j=0;
    for(int i=0; i<vect.size(); i++){
        while(allseqs[i][j] != 0){
            cout<<setw(5)<<allseqs[i][j];
            j += 1;
        }
        j=0;
        cout<<"\n";
    }

    return 0;
}
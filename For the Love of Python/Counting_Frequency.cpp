#include<bits/stdc++.h>

using namespace std;

/*
While rechecking this file, I found that I wrote a code to find frequency of all
elements in a list from line 30 to 44. Yeah, this code works but problems with this is that it is
compatible with only sorted lists, not with all lists in general.

I really want to code it again in Pythonic way, where I will use C++ Maps.
Because maps are like dictionaries maps consists of key, value pair. So in the place of
key I can store the different-different elements of a list and value will be used for storing
frequency.

Basic idea to code that is that while iterating every value of list check whether we have `key` in
our map which is equal to this element if yes then add one in that key's value otherwise add new key
in our map. I think to implement this I need to write two functions one for counting frequency and
another for checking whether key exists in map or not which is turned out to be a bool function.
So let's try it (if you have any better idea to do this or you can optimize it then please tell me :) )
*/

/*
Ranged for loop provides us a great way to iterate map using
pair.first (for keys) and pair.second (for value).
Here we're interested in checking keys so we're using pair.first.
*/
bool inMap(map<int, int>& A, int x){
    for(const auto& pair : A){
        if(pair.first == x)
            return true;
    }
    return false;
}

/*
We can also check whether x is in map or not using map's inbuilt function 
map.fine(x)

here `it` is an iterator. We don't need to write
map<int, int>:: iterator it = A.begin()
because here we're using `auto` keyword
*/
// I have just checked it works!!
bool method_2(map<int, int>&A, int x){
    auto it = A.find(x);
    if(it != A.end()){
        return true;
    }
    return false;
}

/*
The code of following function seems very pythonic to me :)
*/
void frequency(vector<int>& Vec, map<int, int> result = {}){
    for(const int& i : Vec){
        if(inMap(result, i))
            result[i] += 1;
        else{
            result[i] = 1;
        }
    }

    // Now printing 
    cout<<"(int, frequency)"<<endl;
    for(const auto& pair : result){
        cout<<"("<<pair.first<<":"<<pair.second<<")"<<endl;
    }
}


int main(){
    /*
    vector<int> phi {1, 2, 2, 3, 3, 3};
    int len = phi.size();

    int i=0, count = 0, j=0;

    while (i < len){
        count = 0;
        while(phi[i] == phi[j]){
            j++;
            count++;
        }
        cout<<"i = "<<i<<", j = "<<j<<", count = "<<count<<"\n";
        i += count;
        cout<<"i = "<<i<<", j = "<<j<<"\n";
    }
    */

    // map<int, int> A {{1, 2}, {3, 4}};
    // for(auto& pair : A){
    //     cout<<pair.first<<", "<<pair.second<<endl;
    // }

    vector<int> A {1, -1, 0, 2, 1, 1, 0, -1, 2, -1, 2, 3, 3, -1, 1, 2, 0, 3};
    frequency(A);

    return 0;
}
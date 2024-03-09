#include<bits/stdc++.h>

using namespace std;

typedef vector<int> arr;

int main(){

    arr one {3, 27, 38, 43};
    arr :: iterator it;
    arr two {9, 10, 82};
    arr three(7, 0);

    for(int i=0; i<4; i++){
        int temp = one[i];
        one[i] = one[3];
        one[3] = temp;
    }

    for(it = one.begin(); it != one.end(); it++){
        cout<<*it<<" ";
    }

    int index = 0;
    while(one[index] < two[index]){
        three[index] = one[index];
        index+= 1;
    }

    

    

    return 0;
}
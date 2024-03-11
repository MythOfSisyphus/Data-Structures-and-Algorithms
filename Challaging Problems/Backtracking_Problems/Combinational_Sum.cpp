/*
Given an array of positive integers arr[] and an integer x, The task is to find all unique combinations
in arr[] where the sum is equal to x. 
The same repeated number may be chosen from arr[] an unlimited number of times. Elements in a combination
(a1, a2, …, ak) must be printed in non-descending order. (ie, a1 <= a2 <= … <= ak). If there is no combination 
possible print “Empty”.

Examples: 
Input: arr[] = 2, 4, 6, 8, x = 8
Output: 
[2, 2, 2, 2]
[2, 2, 4]
[2, 6]
[4, 4]
[8]
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {2, 4, 6, 8};

    int i=0, j=0, sum=arr[0], x=8;
    int k=0;

    while(i < 3){
        while(sum <= x){
            for(int h=0; h<k; h++){
                cout<<arr[i-1];
            }
            cout<<arr[i]<<" ";
            sum += arr[i];
            j++;
        }

        cout<<"\n";

        i++;
        if(j > 2){
            sum = sum - (3*arr[i-1]) + arr[i];
            j=0;
        }
    }
    

    return 0;
}
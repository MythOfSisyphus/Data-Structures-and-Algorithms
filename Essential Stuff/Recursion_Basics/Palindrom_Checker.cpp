/*
Write a recursive function to check if a given string is a palindrome.
0 1 2 3 4
*/

#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string S){
    int S_length = S.length();

    if(S_length % 2 == 0){
        for(int i=0; i<S_length/2; i++){
            if(S[i] != S[S_length-(i+1)])
                return false;
        }
    }

    if(S_length % 2 == 1){
        for(int i=0; i<(S_length/2 - 1); i++){
            if(S[i] != S[S_length-(i+1)])
                return false;
        }
    }

    return true;
}

int main(){

    string name = "lucky";

    // cout<<name<<endl;
    // cout<<name[1]<<endl;
    // int n = name.length();
    // cout<<n<<endl;
    // cout<<name;

    cout<<isPalindrome(name);
    cout<<isPalindrome("Printf");
    cout<<isPalindrome("AKA");
    cout<<isPalindrome("racecar");
    cout<<isPalindrome("Palindrome");

    return 0;
}
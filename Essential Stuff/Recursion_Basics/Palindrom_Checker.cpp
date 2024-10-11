/*
Write a recursive function to check if a given string is a palindrome.
*/
#include<iostream>
#include<string>

using namespace std;

bool isPalindrom_optimized(const string& S){
    int left = 0;
    int right = S.size()-1;
    while(left < right){
        if(S[left] == S[right]){
            left++;
            right--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){

    cout<<boolalpha;
    cout<<isPalindrom_optimized("copier")<<endl;
    cout<<isPalindrom_optimized("racecar")<<endl;
    cout<<isPalindrom_optimized("nayan")<<endl;
    
    return 0;
}
/*
For Problem's Statement see: https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

// TODO
*/

#include<bits/stdc++.h>

using namespace std;

struct Tree {
    int data;
    Tree* left;
    Tree* right;

    Tree(int value): data(value), left(nullptr), right(nullptr){}
};

int MaxDepth(Tree* x, int d = 0){
    // if(x->left != nullptr){
    //     d+=1;
    //     MaxDepth(x->left, d);
    // }
    if(x->right != nullptr){
        d = d + 1;
        MaxDepth(x->right, d);
    }

    return d;
}

int main(){

    Tree* john = new Tree(1);
    john->right = new Tree(3);
    john->right->right = new Tree(7);
    john->right->right->right = new Tree(11);

    cout<<MaxDepth(john);

    return 0;
}
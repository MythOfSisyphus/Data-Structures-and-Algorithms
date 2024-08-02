/*
Problem Statement: https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

TODO
*/

#include<bits/stdc++.h>

using namespace std;

// Just a tree structure
struct Tree{
    int data;
    Tree* left;
    Tree* right;

    Tree(int value): data(value), left(nullptr), right(nullptr){}
};

// // function to print top view of Tree
// void topviewleft(Tree* x){
//     if(x != nullptr){
//         topviewleft(x->left);
//         cout<<x->data<<" ";
//     }
// }

// void topviewright(Tree* x){
//     if(x->right != nullptr){
//         cout<<x->right->data<<" ";
//         topviewright(x->right);
//     }
// }

// void topview(Tree* x){
//     topviewleft(x);
//     topviewright(x);
// }

int main(){

    Tree* root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);

    root->left->left = new Tree(4);
    // root->left->right = new Tree(5);

    root->left->left->left = new Tree(5);
    root->right->right = new Tree(7);

    // topviewleft(root);
    // topviewright(root);
    // topview(root);

    return 0;
}
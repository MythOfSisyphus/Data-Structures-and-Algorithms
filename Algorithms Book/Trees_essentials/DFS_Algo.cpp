#include<bits/stdc++.h>

using namespace std;

// Binary Tree
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value): data(value), left(nullptr), right(nullptr){}
};

// Preorder Traversal
void PreTraversal(Node* x){
    if(x != nullptr){
        cout<<x->data<<"\n";
        PreTraversal(x->left);
        PreTraversal(x->right);
    }
}

// y is to be searched in Tree x
bool TreeSearch(Node* x, int y){
    if(x != nullptr){
        if(x->data == y){
            return true;
        }
        else{
          bool foundNode = TreeSearch(x->left, y);
          if(!foundNode){
            foundNode = TreeSearch(x->right, y);
          }
          return foundNode;
        }
    }
    return false;
    
}

int main(){
    // root as a root(head) of a tree structure
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    // PreTraversal(root);

    cout<<TreeSearch(root, 6)<<"\n";
    cout<<TreeSearch(root, 5)<<"\n";

    return 0;
}
/*
For Problem's Statement see: https://www.geeksforgeeks.org/problems/maximum-depth-of-binary-tree/1
*/

#include<bits/stdc++.h>

using namespace std;

struct Tree {
    int data;
    Tree* left;
    Tree* right;

    Tree(int value): data(value), left(nullptr), right(nullptr){}
};

/*
Remember the fact that the following function counts the number of nodes in a binary tree.

UNDERSTANDING THE MAXDEPTH FUNCTION: To explain this function I'm gonna consider a binary tree
with only two nodes code for which I have written after int main function see there.

So Call the MaxDepth(root) where root is 1.
our root node is not NULL, so proceed
now call the MaxDepth(root->left) which is 2.
and again 2 is not NULL, so proceed,
now call the MaxDepth(root->left->left) which is NULL, so it return 0,
now call the MaxDepth(root->left->right) which is again NULL, so it also return 0,
so for MaxDepth(root->left) = 1

now we call MaxDepth(root->right) which is null so it returns 0

now we can get our reuired answer which is 2 by doing last step of code.

*/
int MaxDepth(Tree* x){
    // if node is null
    if(x == NULL)
        return 0;

    // getting the left depth
    int left = MaxDepth(x->left);

    // getting the right depth
    int right = MaxDepth(x->right);

    return max(left, right) + 1;
}

// Just a recursive function to clean up memeory
void DeleteNodes(Tree* x){
    if(x != NULL){
        // Recursively delete the left nodes
        DeleteNodes(x->left);
        // Recursively delete the right nodes
        DeleteNodes(x->right);
        // delete the current node
        delete x;
    }
}

int main(){

    Tree* test = new Tree(1);
    test->left = new Tree(2);

    cout<<MaxDepth(test)<<endl;

    DeleteNodes(test);

    // Tree* john = new Tree(1);
    // john->right = new Tree(3);
    // john->right->right = new Tree(7);
    // john->right->right->right = new Tree(11);

    // cout<<MaxDepth(john)<<endl;

    // DeleteNodes(john);

    // Tree* faults = new Tree(1);
    // faults->left = new Tree(2);

    // faults->left->right = new Tree(3);
    // faults->left->right->left = new Tree(4);

    // faults->left->right->left->left = new Tree(8);
    // faults->left->right->left->left->right = new Tree(9);
    // faults->left->right->left->left->right->right = new Tree(10);

    // faults->left->right->right = new Tree(5);
    // faults->left->right->right->left = new Tree(7);
    // faults->left->right->right->right = new Tree(6);

    // cout<<MaxDepth(faults)<<endl;

    // DeleteNodes(faults);

    return 0;
}
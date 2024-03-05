/* I don't want to implement linkedlist again and again in each 
file so I created this .h file
*/

#ifndef linkedlist_implement
#define linkedlist_implement

// singly linked list
struct Node{
    double data;
    Node* next;

    Node(double value): data(value), next(nullptr){}
};

#endif

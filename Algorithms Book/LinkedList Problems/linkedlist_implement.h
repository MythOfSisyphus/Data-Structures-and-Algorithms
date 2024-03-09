/* I don't want to implement linkedlist again and again in each 
file so I created this .h file
*/
#ifndef linkedlist_implement
#define linkedlist_implement

// for singly linked list
struct SNode{
    int data;
    SNode* next;

    SNode(int value): data(value), next(nullptr){}
};

// for doubly linked list
struct DNode{
    int data;
    DNode* next;
    DNode* prev;

    DNode(int value): data{value}, next(nullptr), prev(nullptr) {}
};

// to get length of singly linked list
int s_getlen(SNode* x){
    int length = 0;
    while(x != nullptr){
        length+= 1;
        x = x->next;
    }

    return length;
}

#endif

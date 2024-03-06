#include<iostream>
#include "linkedlist_implement.h"

using namespace std;

void printlist(SNode* x){
    while(x != nullptr){
        cout<<x->data<<"\t";
        x = x->next;
    }
}

int main(){
    
    // Sample singly linkedlist ;)
    SNode* head;
    SNode* one = new SNode(20.34);
    SNode* two = new SNode(2.19);
    SNode* three = new SNode(14.03);
    SNode* four = new SNode(3.14);
    SNode* five = new SNode(19.91);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    head = one;
    printlist(head);

    delete one;
    delete two;
    delete three;
    delete four;
    delete five;

    return 0;
}


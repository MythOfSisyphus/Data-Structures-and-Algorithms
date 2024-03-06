/*
Problems: Multiply two numbers represented by linked lists.
let 2->4->8->1 and 1->9->11 be two linked lists then we're asked to do
2481 * 1911.
*/

#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value): data(value), next(nullptr){}
};

class linkedlist{
    public:
        Node* head;
        linkedlist():head(nullptr) {} 

        bool isEmpty(){
            return head == nullptr;
        }

        void push(int data){
            Node* newNode = new Node(data);

            if(isEmpty()){
                head = newNode;
            }
            else{
                Node* current = head;
                while(current->next != nullptr){
                    current = current->next;
                }
                current->next = newNode;
            }
        }

        int length(){
            int listlen = 0;
            if(isEmpty()){
                return listlen;
            }
            else{
                Node* current = head;
                while(current != nullptr){
                    listlen = listlen + 1;
                    current = current->next;
                }
                return listlen;
            }
        }

        void printlist(){
            if(isEmpty()){
                cout<<"List is empty.\n";
            }
            else{
                Node* current = head;
                while(current != nullptr){
                    cout<<current->data<<" ";
                    current = current->next;
                }
            }
        }
};

int main(){


    return 0;
}
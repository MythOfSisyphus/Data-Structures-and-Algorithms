/*
Problems: Multiply two numbers represented by linked lists.
let 2->4->8->1 and 1->9->11 be two linked lists then we're asked to do
2481 * 1911.
*/

/*#############################################
There is some issue with function getNum() I don't know why
It returns 0 every time.
I'll come to this problems again after couple of days.
###############################################*/

#include<bits/stdc++.h>

// defining 'long long int' as 'lli'
typedef long long int lli;

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

        // function to count number of digits in a list
        int digitsum(){
            int d = 0;
            Node* current = head;
            while(current != nullptr){
                while(current->data != 0){
                    current->data = (current->data)/10;
                    d+= 1;
                }
                current = current->next;
            }

            return d;
        }

        int getNum__(){
            int p = digitsum();
            int sum = 0;
            int d_d = 0;
            Node* current = head;
            while(current != nullptr){
                while(current->data != 0){
                    d_d += 1;
                    current->data = (current->data)/10;
                }

                p = p - d_d;
                d_d = 0;
                sum += ((current->data) * pow(10, p));
                current = current->next;
            }
            return sum;
        }
};

int main(){
    // first list
    linkedlist jobs;

    jobs.push(2);
    jobs.push(40);
    jobs.push(800);
    jobs.push(11);

    // second list
    linkedlist wozniak;

    wozniak.push(1);
    wozniak.push(9);
    wozniak.push(11);

    
    return 0;
}
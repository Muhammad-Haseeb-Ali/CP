// Linked list implementation in C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node * next;
    Node(int val);
};

Node::Node(int val) {
    value = val;
}

Node * head;

int * ptr;

int main() {

    // Head will be type of Node*
    // and others will be type of Node {int value, Node* next}

    head = nullptr;

    for(int n = 0; n <=1; ++n){
        Node * node;
        node = new Node(0);

        Node* tempHead = head;



        while(tempHead->next != nullptr){
            tempHead = tempHead->next;
        }

        tempHead->next;
    }

    while(head != nullptr){
        cout << head->value << " " << head->next << endl;
        head = head->next;
    }
}
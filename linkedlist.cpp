#include "linkedlist.hpp"
#include<iostream>
using namespace std;

LinkedList::LinkedList(){
    this->size=0;
    this->head=nullptr;
}

bool LinkedList::empty(){
    return head==nullptr;
}

Node* LinkedList::get_head(){
    return head;
}

Node* LinkedList::get_tail(){
    return tail;
}

int LinkedList::get_size(){
    return size;
}

void LinkedList::display(){
    Node *temp=head;
    if(temp!=nullptr){
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
    else{
        cout<<'EMPTY LIST';
    }
}


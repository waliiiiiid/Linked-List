#include "linkedlist.hpp"
#include<iostream>
using namespace std;

LinkedList::LinkedList(){
    this->size=0;
    this->head=nullptr;
    this->tail=nullptr;
}

bool LinkedList::empty(){
    return head==nullptr;
}

int LinkedList::get_head(){
    //return head;
    return this->head->data;
}

int LinkedList::get_tail(){
    //return tail;
    return this->tail->data;
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
        cout<<"null";
    }
}

void LinkedList::push_back(int data){
    Node *newNode = new Node(data);


    if(head==nullptr){
        head=newNode;
        tail=newNode;
    }
    else{
    tail->next=newNode;
    tail=newNode;
    }
    size++;
}

void LinkedList::pop_back(){
    if(head==nullptr){
        cout<<"empty list";
        return;
    }
    else if(head==tail){
        delete head;
        head=nullptr;
        tail=nullptr;
    }
    else{
        Node *temp=head;
        while (temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=nullptr;
    }
    size--;
}

void LinkedList::push_front(int data){
    Node *newNode=new Node(data);
    if(head==nullptr){
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
    size++;
}

void LinkedList::pop_front(){
    if(head==nullptr){
        cout<<"empty";
        return;
    }
    else if(head==tail){
        delete head;
        head=nullptr;
        tail=nullptr;
    }
    else{
        Node *newHead=head->next;
        delete head;
        head=newHead;
    }
    size--;
}

void LinkedList::remove(int data){
    if(head==nullptr){
        cout<<"empty list";
        return;
    }
    else if(head->data==data){
        pop_front();
        return;

    }
    else if(tail->data==data){
        pop_back();
        return;
    }
    else{
        Node *temp=head;
        while(temp->next != nullptr){
            if(temp->next->data==data){
                Node * node_to_delete=temp->next;
                temp->next=temp->next->next;
                delete node_to_delete;
                size--;
                return;
            }
            temp=temp->next;
        }
        cout<<data<<"was not found in the list";

    }
    
}
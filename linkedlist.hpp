#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include"node.hpp"

class LinkedList{

private:
    Node *head;
    Node *tail;
    int size;

public:
    LinkedList();
    bool empty();
    int get_head();
    int get_tail();
    void push_front(int data);
    void push_back(int data);
    void pop_front();
    void pop_back();
    void remove(int data);
    int get_size();
    void display();



};




#endif
#ifndef NODE_HPP
#define NODE_HPP

class Node{

private:
    int data;
    Node *next;
    friend class LinkedList;
public:
    Node(int data);
};


#endif

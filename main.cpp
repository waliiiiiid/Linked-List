#include <iostream>
#include "linkedlist.hpp"
using namespace std;


int main()
{

LinkedList list;
list.push_back(5);
list.push_back(3);
list.push_front(1);
list.push_front(0);
list.display();
cout<<endl;
cout<<"size: "<<list.get_size()<<endl;
cout<<"head: "<<list.get_head()<<"tail: "<<list.get_tail()<<endl;
list.remove(12);
list.remove(1);
list.display();
cout<<endl;
cout<<"size: "<<list.get_size()<<endl;
cout<<"head: "<<list.get_head()<<"tail: "<<list.get_tail()<<endl;



}


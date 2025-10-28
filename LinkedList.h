#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

void testLinkedList();
template<typename T>
class LinkedList{
    Node<T>* headPTR;
    int counter;
    public:
        LinkedList();
        ~LinkedList();
        bool insert(int position,const T& item);
        bool remove(int position);
        T get(int position) const;
        int size() const;
        bool isEmpty() const;
        void print() const;
        void testLinkedList();
};
#endif

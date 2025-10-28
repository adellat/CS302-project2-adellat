#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H
#include <iostream>
#include "Node.h"

void testLinkedStack(); 
template <typename T>
class LinkedStack {
    Node<T>* top;
    public:
        LinkedStack();
        ~LinkedStack();
        bool push(const T& value);
        T pop();
        T peek() const;
        bool isEmpty() const;
        void print() const;
        void testLinkedStack(); 
};
#endif 
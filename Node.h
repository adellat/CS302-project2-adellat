#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

template <typename T>
class Node{
    T data;
    Node<T>* nextPTR;
    public:
        Node();
        Node(const T& value);
        Node(const T& value, Node<T>* nextNode);
        T getItem() const;
        void setItem(const T& value);
        Node<T>* getNext() const;
        void setNext(Node<T>* nextNode);
};
#include node.cpp
#endif
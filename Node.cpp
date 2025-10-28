#include "Node.h"

template <typename T>
Node<T>::Node(){
    data = T();
    next = nullptr;
}
template <typename T>
Node<T>::Node(const T& value){
    data = value;
    next = nullptr;
}
template <typename T>
Node<T>::Node(const T& value, Node<T>* nextNode){
    data = value;
    next = nextNode;
}
template <typename T>
T Node<T>::getItem() const{
    return data;
}
template <typename T>
void Node<T>::setItem(const T& value){
    data = value;
}
template <typename T>
Node<T>* Node<T>::getNext() const{
    return next;
}
template <typename T>
void Node<T>::setNext(Node<T>* nextNode){
    next = nextNode;
}
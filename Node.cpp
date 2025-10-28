#include "Node.h"

template <typename T>
Node<T>::Node(){
    data = T();
    nextPTR = nullptr;
}
template <typename T>
Node<T>::Node(const T& value){
    data = value;
    nextPTR = nullptr;
}
template <typename T>
Node<T>::Node(const T& value, Node<T>* nextNode){
    data = value;
    nextPTR = nextNode;
}
template <typename T>
T Node<T>::getItem() const{
    return item;
}
template <typename T>
void Node<T>::setItem(const T& value){
    data = value;
}
template <typename T>
Node<T>* Node<T>::getNext() const{
    return nextPTR;
}
template <typename T>
void Node<T>::setNext(Node<T>* nextNode){
    nextPTR = nextNode;
}
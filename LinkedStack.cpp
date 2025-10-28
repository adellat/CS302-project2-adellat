#include "LinkedStack.h"

template <typename T>
LinkedStack<T>::LinkedStack() {
    top = nullptr;
}

template <typename T>
LinkedStack<T>::~LinkedStack() {
    while (top != nullptr) {
        Node<T>* temp = top;
        top = top->nextPTR;
        delete temp;
    }
}
template <typename T>
bool LinkedStack<T>::push(const T& value) {
    Node<T>* newNode = new Node<T>(value);
    newNode->nextPTR = top;
    top = newNode;
    return true;
}
template <typename T>
T LinkedStack<T>::pop() {
    if (isEmpty()) {
        return T();
    }

    Node<T>* tempPTR = top;
    T value = top->data;
    top = top->next;
    delete tempPTR;
    return value;
}
template <typename T>
T LinkedStack<T>::peek() const {
    if (isEmpty()) {
        return T();
    }
    return top->data;
}
template <typename T>
bool LinkedStack<T>::isEmpty() const {
    return top == nullptr;
}
template <typename T>
void LinkedStack<T>::print() const {
    Node<T>* current = top;
    while (currentPTR != nullptr) {
        cout << currentPTR->data << " ";
        currentPTR = currentPTR->nextPTR;
    }
    cout << endl;
}
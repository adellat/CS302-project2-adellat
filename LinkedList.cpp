#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList(){
    headPTR = nullptr;
    counter = 0;
}
template<typename T>
LinkedList<T>::~LinkedList(){
    Node<T>* current = headPTR;
    while(current != nullptr){
        Node<T>* tempPTR = current;
        current = current->getNext();
        delete tempPTR;
    }
}
template<typename T>
bool LinkedList<T>::insert(int position,const T& item){
    if(position < 0 || position > counter){
        return false;
    }
    Node<T>* newNode = new Node<T>(item);
    if(position == 0){
        newNode->getNext() = headPTR;
        headPTR = newNode;
    }else{
        Node<T>* prevPTR = headPTR;
        for(int i = 0; i < position; i++){
            prevPTR = prevPTR->getNext();
        }
        newNode->getNext() = prevPTR->next;
        prevPTR->getNext() = newNode;
    }
    counter++;
    return true;
}
template<typename T>
bool LinkedList<T>::remove(int position){
     if (position < 0 || position >= counter || headPTR == nullptr) {
        return false;
    }
    Node<T>* tempPTR;
    if (position == 0) {
        tempPTR = headPTR;
        headPTR = headPTR->getNext();
    } else {
        Node<T>* prevPTR = headPTR;
        for (int i = 0; i < position - 1; i++) {
            prevPTR = prevPTR->getNext();
        }
        tempPTR = prevPTR->getNext();
        prevPTR->getNext() = tempPTR->getNext();
    }
    delete tempPTR;
    counter--;
    return true;
}

template<typename T>
T LinkedList<T>::get(int position) const{
    if (position < 0 || position >= counter) {
        return T();
    }
    Node<T>* current = headPTR;
    for (int i = 0; i < position; i++) {
        current = current->getNext();
    }
    return current->getItem();
}
template<typename T>
int LinkedList<T>::size() const{
    return counter;
}
template<typename T>
bool LinkedList<T>::isEmpty() const{
    return counter == 0;
}
template<typename T>
void LinkedList<T>::print() const{
    Node<T>* current = headPTR;
    while(current != nullptr){
        cout << current->getItem() << " ";
        current = current->getNext();
    }
    cout << endl;
}
template<typename T>
void LinkedList<T>::testLinkedList(){
    cout << "Linked List" << endl;
    LinkedList<int> list;
    list.insert(0, 15);
    list.insert(1, 5);
    list.insert(1, 10);  
    list.remove(2);     
    list.print();       
    cout << "Index 0: " << list.get(0) << endl;
}
template class LinkedList<int>;
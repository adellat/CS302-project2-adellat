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
        current = current->next;
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
        newNode->next = headPTR;
        headPTR = newNode;
    }else{
        Node<T>* prevPTR = headPTR;
        for(int i = 0; i < position; i++){
            prevPTR = prevPTR->next;
        }
        newNode->next = prevPTR->next;
        prevPTR->next = newNode;
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
        headPTR = headPTR->next;
    } else {
        Node<T>* prevPTR = headPTR;
        for (int i = 0; i < position - 1; i++) {
            prevPTR = prevPTR->next;
        }
        tempPTR = prevPTR->next;
        prevPTR->next = tempPTR->next;
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
        current = current->next;
    }
    return current->data;
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
        cout << current->data << " ";
        current = current->next;
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
//template class LinkedList<int>;
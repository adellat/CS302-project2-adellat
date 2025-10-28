#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList(){
    headPTR = nullptr;
    counter = 0;
}
template<typename T>
LinkedList<T>::~LinkedList(){
    Node<T>* currentPTR = headPTR;
    while(currentPTR != nullptr){
        Node<T>* tempPTR = currentPTR;
        currentPTR = currentPTR->nextPTR;
        delete tempPTR;
    }
}
template<typename T>
bool LinkedList<T>::insert(int position,const T& item){
    if(position < 0 || position > count){
        return false;
    }
    Node<T>* newNode = new Node<T>(item);
    if(position == 0){
        newNode->nextPTR = headPTR;
        headPTR = newNode;
    }else{
        Node<T>* prevPTR = headPTR;
        for(int i = 0; i < position; i++){
            prevPTR = prevPTR->nextPTR;
        }
        newNode->nextPTR = prevPTR->nextPTR;
        prevPTR->nextPTR = newNode;
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
        headPTR = headPTR->nextPTR;
    } else {
        Node<T>* prevPTR = headPTR;
        for (int i = 0; i < position - 1; i++) {
            prevPTR = prevPTR->nextPTR;
        }
        tempPTR = prevPTR->nextPTR;
        prevPTR->nextPTR = tempPTR->nextPTR;
    }
    delete tempPTR;
    counter--;
    return true;
}

}
template<typename T>
T LinkedList<T>::get(int position) const{
    if (position < 0 || position >= counter) {
        return T();
    }
    Node<T>* currentPTR = headPTR;
    for (int i = 0; i < position; i++) {
        currentPTR = currentPTR->nextPTR;
    }
    return currentPTR->data;
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
    Node<T>* currentPTR = headPTR;
    while(currentPTR != nullptr){
        cout << currentPTR->data << " ";
        currentPTR = currentPTR->nextPTR;
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
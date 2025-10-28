#include "ArrayStack.h"

template <typename T>
ArrayStack<T>::ArrayStack(){
    top = 0;
}
template <typename T>
bool push(const T& value){
    if (top >= DEFAULT_MAX - 1) {
        return false;
    }
    top++;
    items[top] = value;
    return true;
}
template <typename T>
T pop(){
    if (isEmpty()) {
        return T();
    }
    T value = items[top];
    top--;
    return value;
}
template <typename T>
T peek() const{
    if (isEmpty()) {
        return T();
    }
    return items[top];
}
template <typename T>
bool isEmpty() const{
    return top == 0;
}
template <typename T>
void print() const{
    for (int i = top; i >= 0; i--) {
        cout << items[i] << " ";
    }
    cout << endl;
}
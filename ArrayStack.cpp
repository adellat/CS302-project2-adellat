#include "ArrayStack.h"

template <typename T>
ArrayStack<T>::ArrayStack(){
    top = 0;
}
template <typename T>
bool ArrayStack<T>::push(const T& value){
    if (top >= DEFAULT_MAX - 1) {
        return false;
    }
    top++;
    items[top] = value;
    return true;
}
template <typename T>
T ArrayStack<T>::pop(){
    if (isEmpty()) {
        return T();
    }
    T value = items[top];
    top--;
    return value;
}
template <typename T>
T ArrayStack<T>::peek() const{
    if (isEmpty()) {
        return T();
    }
    return items[top];
}
template <typename T>
bool ArrayStack<T>::isEmpty() const{
    return top == 0;
}
template <typename T>
void ArrayStack<T>::print() const{
    for (int i = top; i >= 0; i--) {
        cout << items[i] << " ";
    }
    cout << endl;
}
template <typename T>
void ArrayStack<T>::testArrayStack(){
    cout << "Array Stack" << endl;
    ArrayStack<int> stack;
    stack.push(10);
    stack.push(15);
    cout << "Pop: " << stack.pop() << endl;   
    cout << "Peek: " << stack.peek() << endl; 
    stack.print(); 
}
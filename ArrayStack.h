#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include <iostream>
using namespace std;

void testArrayStack();
template <typename T>
class ArrayStack{
    static const int DEFAULT_MAX = 100;
    T items[DEFAULT_MAX];
    int top;
    public:
        ArrayStack();
        bool push(const T& value);
        T pop();
        T peek() const;
        bool isEmpty() const;
        void print() const;
        void testArrayStack();
};
#endif 
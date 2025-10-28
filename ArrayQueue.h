#ifndef ArrayQueue_H
#define ArrayQueue_H
#include <iostream>
using namespace std;
template<typename T>
class ArrayQueue{
    
    public:
        bool enqueue();
        T dequeue();
        T peek() const;
        bool isEmpty() const;
        void print() const;

};
#endif
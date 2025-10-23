#ifndef ArrayList_h
#define ArrayList_h
#include <iostream>
using namespace std;

class ArrayList(){
    
    public:
        bool insert(int,const T&);
        bool remove(int);
        T get(int) const;
        int size() const;
        bool isEmpty() const;
        void print() const;

};
#endif

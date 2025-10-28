#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <iostream>
using namespace std;

void testArrayList();
template <typename T>
class ArrayList{
    int itemCounter;
    int max;
    static const int DEFAULT_MAX = 100;
    T items[DEFAULT_MAX + 1];
    public:
        ArrayList();
        ArrayList(const ArrayList<T>& arrayList);
        bool insert(int position,const T& newItem);
        bool remove(int position);
        T get(int) const;
        int getSize() const;
        bool isEmpty() const;
        void print() const;
        ~ArrayList() {}
};
#endif

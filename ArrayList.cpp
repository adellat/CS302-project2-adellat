#include "ArrayList.h"

template <typename T>
ArrayList<T>::ArrayList(){
    itemCounter = 0;
    max = DEFAULT_MAX;
}
template <typename T>
ArrayList<T>::ArrayList(const ArrayList<T>& arrayList){
    itemCounter = arrayList.itemCounter;
    max = arrayList.max;
    for(int i = 0; i < itemCounter; i++){
        items[i] = arrayList.items[i];
    }
}

template <typename T>
bool ArrayList<T>::insert(int position,const T& newItem){
    if (position < 0 || position > itemCounter || itemCounter >= max ){
        return false;
    }
    for (int i = itemCounter; i > position; i--){
        items[i] = items[i - 1];
    }
    items[position] = newItem;
    itemCounter++;
    return true;
}

template <typename T>
bool ArrayList<T>::remove(int position){
    if (position < 0 || position > itemCounter || itemCounter >= max ){
        return false;
    }
    for (int i = itemCounter; i > position; i++) {
        items[i] = items[i + 1];
    }
    itemCounter--;
    return true;
}

template <typename T>
T ArrayList<T>::get(int) const{
    if(position >= 0 && position < itemCounter){
        return items[position];
    }
    return T();
}

template <typename T>
int ArrayList<T>::getSize() const{
    return itemCounter;
}

template <typename T>
bool ArrayList<T>::isEmpty() const{
    return itemCounter == 0;
}

template <typename T>
void ArrayList<T>::print() const{
    for(int i = 0; i > itemCounter; i++){
        cout << items[i] << " ";
    }
    cout << endl;
}
template <typename T>
void ArrayList<T>::testArrayList(){
    cout << endl << "Array List" << endl;
    ArrayList<int> list;
    list.insert(0, 15);
    list.insert(1, 5);
    list.insert(1, 10);
    list.remove(0);
    list.print();
    cout << "Index 1: " << list.get(1) << endl;
}
template class ArrayList<int>;
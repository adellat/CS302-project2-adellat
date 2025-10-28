//Author: Adella Todd
//Program: CS 302 Project 2
//Date: 10/27/25
#include "ArrayList.h"
#include "LinkedList.h"
#include "ArrayStack.h"
#include "LinkedStack.h"
#include "ArrayQueue.h"
#include "LinkedQueue.h"

// void testArrayList(){
//     cout << endl << "Array List" << endl;
//     ArrayList<int> list;
//     list.insert(0, 15);
//     list.insert(1, 5);
//     list.insert(1, 10);
//     list.remove(0);
//     list.print();
//     cout << "Index 1: " << list.get(1) << endl;
// }
// void testLinkedList(){
//     cout << "Linked List" << endl;
//     LinkedList<int> list;
//     list.insert(0, 15);
//     list.insert(1, 5);
//     list.insert(1, 10);  
//     list.remove(2);     
//     list.print();       
//     cout << "Index 0: " << list.get(0) << endl;
// }
// void testArrayStack(){
//     cout << "Array Stack" << endl;
//     ArrayStack<int> stack;
//     stack.push(10);
//     stack.push(15);
//     cout << "Pop: " << stack.pop() << endl;   
//     cout << "Peek: " << stack.peek() << endl; 
//     stack.print(); 
// }
// void testLinkedStack(){
//     cout << "Linked Stack" << endl;
//     LinkedStack<int> stack;
//     stack.push(100);
//     stack.push(150);
//     cout << "Pop: " << stack.pop() << endl;   
//     cout << "Peek: " << stack.peek() << endl; 
//     stack.print();                            
// }
//void testArrayQueue(){
//    cout << "Array Queue" << endl;
 //   ArrayQueue<int> arrayQueue;
 //   arrayQueue.insert(1);
 //   arrayQueue.insert(2);
//    arrayQueue.insert(3);
 //   arrayQueue.remove();                          
 //   cout << "Peek: " << arrayQueue.peek() << endl; 
 //   arrayQueue.print();  
//}
//void testLinkedQueue(){
 //   cout << "Linked Queue" << endl;
 //   LinkedQueue<int> queue;
 //   queue.insert(11);
//    queue.insert(22);
//    queue.insert(33);
//    queue.remove();                          
//    cout << "Peek: " << queue.peek() << endl; 
 //   queue.print();
//}

int main(){
    int userInput, implementation;
    cout << "=========Data Structures Tester===========" << endl;
    cout << "1. Test List" << endl << "2. Test Stack" << endl << "3. Test Queue" << endl << "0. Exit" << endl;
    cin >> userInput;
    switch(userInput){
        case 1:
            cout << "Choose Implementation:" << endl << "1. Array-Based" << endl << "2. Linked" << endl;
            cin >> implementation;
            if(implementation == 1){
                
                items.testArrayList();
            }else{
               
                items.testLinkedList();
            }
            break;
        case 2:
            cout << "Choose Implementation:" << endl << "1. Array-Based" << endl << "2. Linked" << endl;
            cin >> implementation;
            if(implementation == 1){
                
                items.testArrayStack();
            }else{
                
                items.testLinkedStack();
            }
            break;
        case 3:
            cout << "Choose Implementation:" << endl << "1. Array-Based" << endl << "2. Linked" << endl;
            cin >> implementation;
            // if(implementation = 1){

            // }else{

            // }
            break;
        case 0:
            cout << "Goodbye!" << endl;
            return 0;
        default:
            cout << "invalid option, please enter a different option" << endl;
    }
    return 0;
}
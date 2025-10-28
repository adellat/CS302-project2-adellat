# project2: main.o
# 	g++ main.o -o project2

# main.o: main.cpp ArrayList.h LinkedList.h ArrayQueue.h LinkedQueue.h ArrayStack.h LinkedStack.h Node.h
# 	g++ -c main.cpp

# clean:
# 	rm *.o project2
project2: main.o ArrayStack.o LinkedStack.o LinkedList.o ArrayList.o ArrayQueue.o LinkedQueue.o Node.o
	g++ main.o ArrayStack.o LinkedStack.o LinkedList.o ArrayList.o ArrayQueue.o LinkedQueue.o Node.o -o project2

main.o: main.cpp ArrayList.h LinkedList.h ArrayQueue.h LinkedQueue.h ArrayStack.h LinkedStack.h Node.h
	g++ -c main.cpp

ArrayStack.o: ArrayStack.cpp ArrayStack.h
	g++ -c ArrayStack.cpp

LinkedStack.o: LinkedStack.cpp LinkedStack.h Node.h
	g++ -c LinkedStack.cpp

LinkedList.o: LinkedList.cpp LinkedList.h Node.h
	g++ -c LinkedList.cpp

ArrayList.o: ArrayList.cpp ArrayList.h Node.h
	g++ -c ArrayList.cpp

ArrayQueue.o: ArrayQueue.cpp ArrayQueue.h
	g++ -c ArrayQueue.cpp

LinkedQueue.o: LinkedQueue.cpp LinkedQueue.h Node.h
	g++ -c LinkedQueue.cpp

Node.o: Node.cpp Node.h
	g++ -c Node.cpp

clean:
	rm  *.o project2
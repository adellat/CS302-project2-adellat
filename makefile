project2: main.o
	g++ main.o -o project2

main.o: main.cpp ArrayList.h LinkedList.h ArrayQueue.h LinkedQueue.h ArrayStack.h LinkedStack.h Node.h
	g++ -c main.cpp

clean:
	rm *.o project2
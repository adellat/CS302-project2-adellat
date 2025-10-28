Project: Array-Based and Linked Lists, Queues, and Stacks
Due: 10/23/25

1. List
   - ArrayList<T>: Stores elements in a dynamically allocated array.
   - LinkedList<T>: Stores elements as a singly linked list using Node<T> objects.

   Core operations:
   - bool insert(int index, const T& value)
   - bool remove(int index)
   - T get(int index) const
   - int size() const
   - bool isEmpty() const
   - void print() const
---------------------------------------------------------------------------------------
2. Stack
   - ArrayStack<T>: Implemented using a dynamic array.
   - LinkedStack<T>: Implemented using a singly linked list.

   Core operations:
   - bool push(const T& value)
   - T pop()
   - T peek() const
   - bool isEmpty() const
   - void print() const
---------------------------------------------------------------------------------------
3. Queue
   - ArrayQueue<T>: Implemented using a dynamic array.
   - LinkedQueue<T>: Implemented using a singly linked list with head and tail pointers.

   Core operations:
   - bool enqueue(const T& value)
   - T dequeue()
   - T peek() const
   - bool isEmpty() const
   - void print() const
#ifndef DEQUE_HEADER
#define DEQUE_HEADER
#include "Queue.h"
#include "Stack.h"


template <class T>
class Deque:public Stack<T>,public Queue<T> {
    public:
        virtual void pushFront(T&) = 0;
};

#endif

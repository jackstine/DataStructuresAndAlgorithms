#ifndef LINEARLIST_HEADER
#define LINEARLIST_HEADER
#include "Stack.h"
#include "Queue.h"
#include "Deque.h"

template <class T>
class LinearList : virtual public Deque<T> {
    public:
        virtual void add(const T&) = 0;
        virtual T& get(int) = 0;
        virtual T& remove(int) = 0;
        virtual void insert(int, T&) = 0;
        virtual int getSize() = 0;
        virtual void reverse() = 0;
};

#endif

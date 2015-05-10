#ifndef QUEUE_HEADER
#define QUEUE_HEADER

template <class T>
class Queue {
    public:
        virtual bool isEmpty() = 0;
        virtual T& popFront() = 0;
        virtual void push(T&) = 0;
        virtual T& front() = 0;
};
#endif

#ifndef STACK_HEADER
#define STACK_HEADER

template <class T>
class Stack {
    public:
        virtual T& peek() = 0;
        virtual T& popBack() = 0;
        virtual void push(T&) = 0;
        virtual bool isEmpty() = 0;
};

#endif

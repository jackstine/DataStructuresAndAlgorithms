#ifndef NODE_CPP
#define NODE_CPP

template <class T>
struct Node {
    Node<T>* next;
    T data;
};

#endif

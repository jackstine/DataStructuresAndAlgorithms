#include "LinearList.h"
#include "Node.cpp"
#include <iostream>

template <class T>
class SingleLinkedList:public LinearList<T> {
    private:
       Node<T>* head;
       int size;
       void checkIndex(int);
    public:
        SingleLinkedList();
        int getSize();
        void add(const T&);
        void insert(int,T&);
        T& remove(int);
        bool isEmpty();
        T& popFront();
        T& popBack();
        void push(T&);
        void pushFront(T&);
        T& front();
        T& get(int);
        T& peek();
        void reverse();
        






        friend std::ostream& operator<<(std::ostream& os,SingleLinkedList<T>& obj) {
            os << "[";
            if (obj.size == 0) {
                os << "]";
                return os;
            }
            else {
                Node<T>* current = obj.head;
                while (current->next != 0) {
                    os << current->data << ", ";
                    current = current->next;
                }
                os << current->data << "]"; 
                return os;
            }
        }
};

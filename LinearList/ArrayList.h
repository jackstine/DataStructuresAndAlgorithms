#ifndef ARRAYLIST_HEADER
#define ARRAYLIST_HEADER
#include "LinearList.h"

template <class T>
class ArrayList : public LinearList<T> {
    private:
        const static int DEFAULT_SIZE = 10;
        T* list;
        // the length is the actual size of the list
        int length;
        // the size is the amount of the list that is used up
        int size;


        void createDefault();
        void doubleSizeOfList();
        void createToSize(const int);
        void preAddCheck();
        void checkIndex(int);
        void checkResize();

    public:
        ArrayList();
        ArrayList(int);
        void add(const T&); // allows us to add consts that have not been
        // instantiated   such as    add(8)   instead  int num = 8;  vec.add(num);
        void insert(int,T&);
        int getLength();
        int getSize();
        T& get(int);
        T& remove(int);
        void resize(int);
        bool isEmpty();
        void push(T&);
        void pushFront(T&);
        T& popBack();
        T& popFront();
        T& peek();
        T& front();
        void reverse();
};

#endif

#include "ArrayList.h"

template <class T>
ArrayList<T>::ArrayList() {
    createDefault();
}

template <class T>
ArrayList<T>::ArrayList(int size) {
    this->createToSize(size);
}

template <class T>
void ArrayList<T>::createDefault() {
    this->createToSize(this->DEFAULT_SIZE);
}

template <class T>
void ArrayList<T>::createToSize(const int size) {
    this->list = new T[size];
    this->length = size;
}

template <class T>
void ArrayList<T>::add(const T& element) {
    this->preAddCheck();
    list[size++] = element;
}

template <class T>
T& ArrayList<T>::get(int index) {
    checkIndex(index);
    return this->list[index];
}

template <class T>
void ArrayList<T>::resize(int newLength) {
    int previousLength = this->length;
    this->length = newLength;   //,, length changes
    T* tempList = new T[this->length];
    for (int i = 0 ; i < previousLength ; i++) {
        tempList[i] = this->list[i];
    }
    delete this->list;
    this->list = tempList;
}


template <class T>
void ArrayList<T>::checkResize() {
    if ( this->size < this->length/4 ) {
        this->resize(this->length/2);
    }
}

template <class T>
T& ArrayList<T>::remove(int index) {
    this->checkIndex(index);
    this->checkResize();
    int elementToReturn;
    if (index == this->size - 1) {
        size --;
        return this->list[index];
    }
    else {
        T& previous = this->list[index];
        int first = index;
        int next = first + 1;
        while (next != this->size) {
            this->list[first] = this->list[next];
            first++;
            next++;
        }
        size--;
        return previous;
    }
}


template <class T>
void ArrayList<T>::preAddCheck() {
    if (length <= 0) {
        createDefault();
    }
    else if (size == length) {
        int newLength = this->length * 2;
        this->resize(newLength);
    }
}


template <class T>
void ArrayList<T>::checkIndex(int index) {
    if (index >= this->size) {
        throw 1;
    }
    else if ( size == 0 ) {
        throw 2;
    }
    else if ( index < 0 ) {
        throw 3;
    }
}

template <class T>
void ArrayList<T>::insert(int index, T& element) {
    preAddCheck();
    checkIndex(index);
    //need to shift everything change index to element,
    T temp = this->list[index];
    this->list[index] = element;
    int first = index + 1;  // the one after the index
    while ( first!= this->size ) {
        T temp2 = this->list[first];
        this->list[first] = temp;
        temp = temp2;
        first++;
    }
    this->add(temp);
}

template <class T>
int ArrayList<T>::getSize() {
    return this->size;
}

template <class T>
int ArrayList<T>::getLength() {
    return this->length;
}

template <class T>
bool ArrayList<T>::isEmpty() {
    return this->size == 0;
}

template <class T>
void ArrayList<T>::push(T& element) {
    this->add(element);
}


template <class T>
T& ArrayList<T>::popBack() {
    return this->remove(this->size-1);
}

template <class T>
T& ArrayList<T>::popFront() {
    return this->remove(0);
}

template <class T>
T& ArrayList<T>::peek() {
    return this->get(this->size - 1);
}

template <class T>
void ArrayList<T>::pushFront(T& element) {
    this->insert(0,element);
}

template <class T>
T& ArrayList<T>::front() {
    return this->get(0);
}

template <class T>
void ArrayList<T>::reverse() {
    T* temp = new T[this->length];
    int begin = this->size;
    int count = 0;
    while (--begin != -1) {
        temp[count] = this->list[begin];
        count++;
    }
}

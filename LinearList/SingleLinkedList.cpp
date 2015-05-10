#include "SingleLinkedList.h"
#include <iostream>

template <class T>
SingleLinkedList<T>::SingleLinkedList() {
    this->head = 0;
}

template <class T>
void SingleLinkedList<T>::add(const T& element) {
    if ( this->head == 0 ) {
        this->head = new Node<T>;
        this->head->data = element;
    }
    else {
        Node<T>* current = this->head;
        while (current->next != 0 ) {
            current = current->next;
        }
        current->next = new Node<T>;
        current->next->data = element;
    }
    size++;
}

template <class T>
int SingleLinkedList<T>::getSize() {
    return this->size;
}


template <class T>
void SingleLinkedList<T>::checkIndex(int index) {
    if ( index >= size ) {
        throw 1;
    }
    else if ( index < 0 ) {
        throw 2;
    }
}

template <class T>
T& SingleLinkedList<T>::remove(int index) {
    this->checkIndex(index);
    Node<T>* temp = this->head;
    if ( index == 0 ) {
        this->head = this->head->next;
    }
    else {
        int count = 0;
        Node<T>* current = this->head;
        int oneBeforeIndex = index - 1;
        while (count < oneBeforeIndex ) {
            current = current->next;
            count++;
        }
        temp = current->next;
        current->next = current->next->next;
    }
    this->size--;
    T& dataToSend = temp->data;
    delete temp;
    return dataToSend;
}

template <class T>
bool SingleLinkedList<T>::isEmpty() {
    return this->getSize() != 0;
}

template <class T>
T& SingleLinkedList<T>::popFront() {
    return this->remove(0);
}

template <class T>
void SingleLinkedList<T>::push(T& element) {
    this->add(element);
}

template <class T>
T& SingleLinkedList<T>::front() {
    this->get(0);
}

template <class T>
T& SingleLinkedList<T>::get(int index) {
    this->checkIndex(index);
    Node<T>* current = this->head;
    if (index != 0 ) {
        while (index != 0, index--) {
            current = current->next;
        }
    }
    return current->data;
}

template <class T>
T& SingleLinkedList<T>::peek() {
    return this->get(this->size-1);
}

template <class T>
T& SingleLinkedList<T>::popBack() {
    return this->remove(this->size-1);
}

template <class T>
void SingleLinkedList<T>::pushFront(T& element) {
    return this->insert(0,element);
}

template <class T>
void SingleLinkedList<T>::insert(int index, T& element) {
    this->checkIndex(index);
    Node<T>* temp = new Node<T>;
    temp->data = element;
    if ( index == 0 ) {
        temp->next = this->head;
        this->head = temp;
    }
    else {
        Node<T>* current = this->head;
        Node<T>* previous = current;
        for (int i = 0; i < index; i++) {
            previous = current;
            current = current->next;
        }
        previous->next = temp;
        temp->next = current;
    }
}

template <class T>
void SingleLinkedList<T>::reverse() {
    Node<T>* current = this->head;
    Node<T>* temp = 0;
    Node<T>* previous;
    while(current != 0) {
        previous = current;
        current = current->next;
        previous->next = temp;
        temp = previous;
    }
    this->head = temp;
}


#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include "Node.cpp"

#define FOR(i,p,n) for(int i=p;i<n;i++)

int main(){
    Node<int> node;
    Node<int>* another;

    another = (Node<int>*)malloc(sizeof(Node<int>));

    //
    //
    //
    //struct Node<int> node;
    //struct Node<int>* another;
    //node.next = another;      <<  this will cause a core dump, because the 
        //alocated space for another has not been allocated.
        //  example,  there is nothing pointing to another
    //
    //
    //
    //

    std::cout << " made the pointer "<< "\n";
    node.next = new Node<int>;
    std::cout << " made the connection "<< "\n";
    node.data = 4;
    node.next->data = 7;
    std::cout << " made the thing "<< "\n";
    std::cout << node.next->data << "\n";
    return 0;
}

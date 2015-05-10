#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include "SingleLinkedList.cpp"

#define FOR(i,p,n) for(int i=p;i<n;i++)

int main(){
    SingleLinkedList<int> link;
    link.add(7);
    link.remove(0);
    link.add(8);
    link.add(9);
    link.add(10);
    link.add(11);
    link.add(12);
    link.remove(2);
    std::cout << link << "\n";
    link.reverse();
    std::cout << link << "\n";
    link.reverse();
    std::cout << link << "\n";
    return 0;
}

#include "ArrayList.cpp"
#include "Dummy.cpp"
#include <iostream>

int main(){
//    Dummy dum(1);
//    ArrayList<Dummy> array;
//    array.add(dum);
//    Dummy* other = array.get(0);
//    other->add(7);
//    std::cout << array.get(0)->get() << "\n";

    ArrayList<int> array;
    array.add(8);
    int h = 7;
    array.add(h);
    std::cout << array.get(0) << "\n";
    int g = array.get(0);
    g++;
    std::cout << array.get(0) << "\n";
    return 0;
}

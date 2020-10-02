#include "ArrayList.cpp"
#include "Dummy.cpp"
#include <iostream>
using namespace std;

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
    cout << array.get(0) << "\n";
    int g = array.get(0);
    g++;
    cout << array.get(0) << "\n";
    return 0;
}

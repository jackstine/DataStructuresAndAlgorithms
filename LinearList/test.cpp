#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

#define FOR(i,p,n) for(int i=p;i<n;i++)

using namespace std;

template <class T>
void function(T& int1){
    int h = 7;
    int1 += h;
    cout << int1 << "\n";
}

int main(){
    int* array;
    int otherArray[] = {7,5,3,2,3,4,5};

    array = new int[10];
    array[0] = 7;
    cout << array[0] << "\n";

   // array = otherArray;

   // cout << array[0] << array[1] << array[2] << array[3] << "\n";



//    char a ='a';
//    function(a);
//    cout << a << "\n";
    return 0;
}

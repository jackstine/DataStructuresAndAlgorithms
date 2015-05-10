#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

#define FOR(i,p,n) for(int i=p;i<n;i++)

int main(){
    std::vector<int> myVec;
    myVec.push_back(1);
    int h = myVec.at(0);
    h += 5;
    std::cout << myVec.at(0) << "\n";
    return 0;
}

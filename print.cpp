#include "inout.h"
#include <iostream>

using namespace std;

void print(const vector<int>& vec) {
    for (auto& elem : vec) {
        cout << elem << endl;
    }
}
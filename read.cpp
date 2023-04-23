#pragma once
#include <vector>

void read(std::vector<int>& vec);
void print(const std::vector<int>& vec);
#include "inout.h"
#include <iostream>
using namespace std;

void read(vector<int>& vec) {
    int n;
    cout << "Введите длину: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Введите элемент[" << i + 1 << "]:";
        int x;
        cin >> x;
        vec.push_back(x);
    }
}
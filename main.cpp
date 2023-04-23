#include <iostream>
#include <algorithm>
#include <vector>
#include "inout.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<int> vec;
    read(vec);
    sort(vec.begin(), vec.end());
    cout << endl << endl;
    print(vec);
    return 0;
}

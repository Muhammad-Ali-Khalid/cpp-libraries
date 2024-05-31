#include <iostream>
#include "Dynamic1DArray.h"
#include "Dynamic2DArray.h"

int main() {
    Dynamic2DArray<int> obj(3, 3);
    obj.fillArray();
    obj.displayArray();
    obj.transpose();
    obj.displayArray();
    obj.deleteArray();
    return 0;
}

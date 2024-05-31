#include <iostream>
#include "Dynamic1DArray.h"

int main() {
    Dynamic1DArray <int> obj(-5);
    obj.fillArray();
    obj.displayArray();
    obj.resizeArray(6);
    obj.displayArray();
    obj.deleteArray();
    return 0;
}

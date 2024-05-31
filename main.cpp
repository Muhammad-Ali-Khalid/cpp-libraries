#include <iostream>
#include "Dynamic1DArray.h"
#include "Dynamic2DArray.h"
#include "Dynamic2DJaggedArray.h"

int main() {
    Dynamic2DJaggedArray<int> obj(3);
    obj.fillArray();
    obj.displayArray();
    obj.deleteArray();
    return 0;
}

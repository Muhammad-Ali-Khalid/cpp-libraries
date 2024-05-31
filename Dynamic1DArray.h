// Muhammad Ali Khalid
#ifndef CPP_LIBRARIES_DYNAMIC1DARRAY_CPP
#define CPP_LIBRARIES_DYNAMIC1DARRAY_CPP

#include <iostream>

using namespace std;

template<class T>
class Dynamic1DArray {
private:
    T *ptr;
    int size;
public:
    Dynamic1DArray() {
        size = 0;
        ptr = nullptr;
    }

    Dynamic1DArray(int size) {
        if (size <= 0) {
            cout << "Enter valid size" << endl;
            exit(0);
        }
        this->size = size;
        ptr = new T[size];
    }

    ~Dynamic1DArray() = default;

    void fillArray() {
        cout << "Enter values" << endl;
        for (int i = 0; i < size; i++) {
            cout << "Index " << i + 1 << ": ";
            cin >> ptr[i];
        }
    }

    int getSize() {
        return size;
    }

    // Taking input from user to fill array
    void fillArray(T *newPtr, int newSize) {
        cout << "Enter values" << endl;
        for (int i = size; i < newSize; i++) {
            cout << "Index " << i + 1 << ": ";
            cin >> newPtr[i];
        }
    }

    void displayArray() {
        cout << "Displaying Array" << endl;
        for (int i = 0; i < size; i++) {
            cout << ptr[i] << "    ";
        }
        cout << endl;
    }

    void resizeArray(int newSize) {
        if (newSize <= 0) {
            cout << "Enter valid size" << endl;
            exit(0);
        }
        if (newSize != size) {
            T *newPtr = new T[newSize];
            if (newSize > size) {
                for (int i = 0; i < size; i++) {
                    newPtr[i] = ptr[i];
                }
                fillArray(newPtr, newSize);
                size = newSize;
                ptr = newPtr;
            } else if (newSize < size) {
                for (int i = 0; i < newSize; i++) {
                    newPtr[i] = ptr[i];
                }
                size = newSize;
                ptr = newPtr;
            }
        }
    }

    void deleteArray() {
        delete[] ptr;
        ptr = nullptr;
    }
};

#endif //CPP_LIBRARIES_DYNAMIC1DARRAY_CPP

// Muhammad Ali Khalid
#ifndef CPP_LIBRARIES_DYNAMIC2DARRAY_H
#define CPP_LIBRARIES_DYNAMIC2DARRAY_H

#include <iostream>

using namespace std;

template<class T>
class Dynamic2DArray {
private:
    T **ptr;
    int rows;
    int cols;
public:
    Dynamic2DArray() {
        ptr = nullptr;
        rows = 0;
        cols = 0;
    }

    Dynamic2DArray(int rows, int cols) {
        if (rows <= 0) {
            cout << "Invalid rows" << endl;
            exit(0);
        }
        if (cols <= 0) {
            cout << "Invalid cols" << endl;
            exit(0);
        }
        this->rows = rows;
        this->cols = cols;
        ptr = new T *[rows];
        for (int i = 0; i < rows; i++) {
            ptr[i] = new T[cols];
        }
    }

    ~Dynamic2DArray() = default;

    int getRows() {
        return rows;
    }

    int getCols() {
        return cols;
    }

    // Taking input from user to fill array
    void fillArray() {
        cout << "Enter values" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Row " << i + 1 << " col " << j + 1 << ": ";
                cin >> ptr[i][j];
            }
        }
    }

    void displayArray() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << ptr[i][j] << "    ";
            }
            cout << endl;
        }
    }

    // Changing rows into cols
    void transpose() {
        T **newPtr = new T *[rows];
        for (int i = 0; i < rows; i++) {
            newPtr[i] = new T[cols];
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                newPtr[i][j] = ptr[j][i];
            }
        }
        ptr = newPtr;

    }

    void deleteArray() {
        for (int i = 0; i < rows; i++) {
            delete[] ptr[i];
        }
        delete[] ptr;
    }

};

#endif //CPP_LIBRARIES_DYNAMIC2DARRAY_H

// Muhammad Ali Khalid
#ifndef CPP_LIBRARIES_DYNAMIC2DJAGGEDARRAY_H
#define CPP_LIBRARIES_DYNAMIC2DJAGGEDARRAY_H

#include <iostream>

using namespace std;

template<class T>
class Dynamic2DJaggedArray {
private:
    T **ptr;
    int rows{};
    int *cols; // Number of cols for each row
public:
    Dynamic2DJaggedArray() {
        ptr = nullptr;
        rows = 0;
        cols = nullptr;
    }

    Dynamic2DJaggedArray(int rows) {
        if (rows <= 0) {
            cout << "Invalid rows" << endl;
            exit(0);
        }
        this->rows = rows;
        ptr = new T *[rows];
        cols = new int[rows];
        for (int i = 0; i < rows; i++) {
            cout << "Enter number of cols for row " << i + 1 << ": ";
            cin >> cols[i];
            if (cols[i] <= 0) {
                cout << "Invalid number of cols" << endl;
                exit(0);
            }
        }
        for (int i = 0; i < rows; i++) {
            ptr[i] = new T[cols[i]];
        }
    }

    // Taking input from user to fill array
    void fillArray() {
        cout << "Enter values" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols[i]; j++) {
                cout << "Row " << i + 1 << " col " << j + 1 << ": ";
                cin >> ptr[i][j];
            }
        }
    }

    void displayArray() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols[i]; j++) {
                cout << ptr[i][j] << "    ";
            }
            cout << endl;
        }
    }

    void deleteArray() {
        for (int i = 0; i < rows; i++) {
            delete[] ptr[i];
        }
        delete[] ptr;
    }
};

#endif //CPP_LIBRARIES_DYNAMIC2DJAGGEDARRAY_H

#include <iostream>
using namespace std;
template <typename T>
class Matrix {
private:
    int row;
    int col;
    int row2;
    int col2;
    T** Matr;
    T** Matr2;
public:
    Matrix(int x, int y, int x2, int y2) {
        row = x; col = y;
        Matr = new T * [row];
        for (int i = 0; i < row; i++) {
            Matr[i] = new T[col];
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                Matr[i][j] = 1;
            }

        }
        row2 = x2; col2 = y2;
        Matr2 = new T * [row2];
        for (int i = 0; i < row2; i++) {
            Matr2[i] = new T[col2];
        }

        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {
                Matr2[i][j] = 1;
            }

        }

    }
    void print() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << " " << Matr[i][j];
            }
            cout << endl;

        }
        cout << endl;
        cout << endl;
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {
                cout << " " << Matr2[i][j];
            }
            cout << endl;

        }
        cout << endl;
        cout << endl;
    }



    ~Matrix() {

        delete[] Matr;
        delete[] Matr2;
    }
};


int main() {
    int sizeX = 5;
    int sizeY = 4;
    int sizeX2 = 5;
    int sizeY2 = 4;
    Matrix<int> a(sizeX, sizeY, sizeX2, sizeY2);
    a.print();
    Matrix<char> a2(sizeX, sizeY, sizeX2, sizeY2);
    a2.print();
    Matrix<float> a3(sizeX, sizeY, sizeX2, sizeY2);
    a3.print();

}
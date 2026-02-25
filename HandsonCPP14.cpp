#include <iostream>
#include <initializer_list>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int **data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        allocate();
        for (int i=0; i<rows; i++)
            for (int j=0; j<cols; j++)
                data[i][j]=0;

        cout << "Matrix(" << rows << ", " << cols << ") constructed\n";
    }
    Matrix(initializer_list<initializer_list<int>> list) {
        rows=list.size();
        cols=list.begin()->size();

        allocate();

        int i=0;
        for (auto &row : list) {
            int j=0;
            for (auto &val : row) {
                data[i][j]=val;
                j++;
            }
            i++;
        }

        cout << "Matrix(initializer_list) constructed\n";
    }
    void allocate() {
        data=new int*[rows];
        for (int i=0; i<rows; i++) {
            data[i]=new int[cols];
        }
    }
    void print() const {
        cout << "Matrix (" << rows << " x " << cols << "):\n";
        for (int i=0; i<rows; i++) {
            for (int j=0; j<cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    ~Matrix() {
        for (int i=0; i<rows; i++) {
            delete[] data[i];
        }
        delete[] data;
        cout << "Matrix destroyed and memory freed\n";
    }
};

int main() {
    cout << "Creating matrix A using (rows, cols):\n";
    Matrix A(2, 3);
    A.print();

    cout << "\nCreating matrix B using initializer_list:\n";
    Matrix B{{1, 2, 3}, {4, 5, 6}};
    B.print();

    cout << "\nCreating matrix C using initializer_list:\n";
    Matrix C{{7, 8}, {9, 10}, {11, 12}};
    C.print();

    cout << "\nEnd of main(), destructors will be called automatically.\n";
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;


template <typename T>
concept Numeric = requires(T a, T b) {
    { a + b } -> same_as<T>;
    { a * b } -> same_as<T>;
};

template <Numeric T>
class Matrix {
    int rows, cols;
    vector<vector<T>> data;

public:
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<T>(c)) {}

    void set(int i, int j, T val) {
        data[i][j] = val;
    }

    Matrix operator+(const Matrix& other) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.data[i][j] = data[i][j] + other.data[i][j];
        return result;
    }


    Matrix operator*(const Matrix& other) {
        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < other.cols; j++)
                for (int k = 0; k < cols; k++)
                    result.data[i][j] += data[i][k] * other.data[k][j];

        return result;
    }

    void display() {
        for (auto& row : data) {
            for (auto& val : row)
                cout << val << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix<int> A(2,2), B(2,2);

    A.set(0,0,1); A.set(0,1,2);
    A.set(1,0,3); A.set(1,1,4);

    B.set(0,0,5); B.set(0,1,6);
    B.set(1,0,7); B.set(1,1,8);

    cout << "Addition:\n";
    (A + B).display();

    cout << "\nMultiplication:\n";
    (A * B).display();


    return 0;
}
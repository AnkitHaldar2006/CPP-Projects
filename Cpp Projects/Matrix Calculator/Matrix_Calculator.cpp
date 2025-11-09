#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    vector<vector<double>> mat;
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c), mat(r, vector<double>(c)) {}

    void input() {
        cout << "Enter elements (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> mat[i][j];
    }

    void display() const {
        for (const auto& row : mat) {
            for (double val : row)
                cout << val << " ";
            cout << "\n";
        }
    }

    Matrix add(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }

    Matrix subtract(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
        return result;
    }

    Matrix multiply(const Matrix& other) const {
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < other.cols; ++j)
                for (int k = 0; k < cols; ++k)
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
        return result;
    }

    Matrix scalarMultiply(double scalar) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.mat[i][j] = mat[i][j] * scalar;
        return result;
    }

    Matrix transpose() const {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.mat[j][i] = mat[i][j];
        return result;
    }

    int getRows() const { return rows; }
    int getCols() const { return cols; }
};

int main() {
    int r, c;
    cout << "Enter rows and columns for matrices: ";
    cin >> r >> c;

    Matrix A(r, c), B(r, c);
    cout << "Matrix A:\n"; A.input();
    cout << "Matrix B:\n"; B.input();

    cout << "\nA + B:\n"; A.add(B).display();
    cout << "\nA - B:\n"; A.subtract(B).display();
    cout << "\nA Transpose:\n"; A.transpose().display();
    cout << "\nA * 2:\n"; A.scalarMultiply(2).display();

    if (A.getCols() == B.getRows()) {
        cout << "\nA * B:\n"; A.multiply(B).display();
    } else {
        cout << "\nMatrix multiplication not possible (A.cols != B.rows).\n";
    }

    return 0;
}
//
// Created by yulin on 2022/5/14.
//

#include "practice/practice_chapter_11.h"


namespace matrix {
    Matrix::Matrix() {
        this->cols = this->rows = this->size = 0;
        this->data = this->com = nullptr;
    }

    Matrix::Matrix(int x, int y) {
        this->rows = x;
        this->cols = y;
        this->size = x * y;
        data = new int *[x];
        for (int i = 0; i < x; ++i)
            data[i] = new int[y];
        com = nullptr;

    }

    Matrix::~Matrix() {
        for (int i = 0; i < rows; ++i)
            delete[] data[i];
        delete[] data;
    }

    void Matrix::init() {
        int x, y;
        cout << "Please enter the size of Matrix(x y):" << endl;
        cin >> x >> y;
        this->rows = x;
        this->cols = y;
        this->data = new int *[x];
        for (int i = 0; i < x; ++i)
            this->data[i] = new int[y];

        cout << "Please enter the value of Matrix:" << endl;
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                cin >> this->data[i][j];
            }
        }
    }


    Matrix Matrix::operator+(const Matrix &mat) const {
        Matrix m = {mat.rows, mat.cols};
        for (int i = 0; i < mat.rows; ++i)
            for (int j = 0; j < mat.cols; ++j) {
                m.data[i][j] = this->data[i][j] + mat.data[i][j];
            }
        return m;
    }

    Matrix Matrix::operator*(const Matrix &mat) const {
        Matrix m = {mat.rows, mat.cols};
        if (this->cols != mat.rows)
            cout << "Matrix can't multiply" << endl;
        else {
            for (int i = 0; i < this->rows; ++i) {
                for (int j = 0; j < mat.cols; ++j) {
                    for (int k = 0; k < this->cols; ++k) {
                        m.data[i][j] = this->data[i][k] * mat.data[k][j];
                    }

                }
            }
        }

        return m;
    }

//    template<typename T>
//    Matrix Matrix::operator*(T &) {
//        Matrix m;
//        return m;
//    }

    template<typename T>
    Matrix operator*(const T &, const Matrix &) {
        Matrix m;
        return m;
    }



    void Matrix::show() const {
        cout << "Matrix result:" << endl;
        for (int i = 0; i < this->rows; ++i) {
            for (int j = 0; j < this->cols; ++j) {
                cout << this->data[i][j] << " ";
            }
            cout << endl;
        }
        cout << std::endl;

    }

    ostream & operator<<(ostream &os, const Matrix &m) {
        os<<"Matrix:"<<endl;
        for (int i = 0; i < m.rows; ++i) {
            for (int j = 0; j < m.cols; ++j) {
                os <<m.data[i][j] << " ";

            }
            os << endl;
        }

        return os;
    }


}



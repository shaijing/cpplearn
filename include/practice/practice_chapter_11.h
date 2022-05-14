//
// Created by yulin on 2022/5/14.
//

#ifndef CPPLEARN_PRACTICE_CHAPTER_11_H
#define CPPLEARN_PRACTICE_CHAPTER_11_H

#include <iostream>

namespace matrix {
    using namespace std;

    class Matrix {
    public:
        int rows;
        int cols;
        int size;
        int **data;
        int **com;

    public:
        Matrix();

        Matrix(int, int);

        ~Matrix();

        void init();

        //apply to Matrix + Matrix
        Matrix operator+(const Matrix &) const;

        //apply to Matrix * Matrix
        Matrix operator*(const Matrix &) const;

        //apply to Matrix * num
//        template<typename T>
//        Matrix operator*(T &);

        //apply to num * Matrix
        template<typename T>
        friend Matrix operator*(const T &, const Matrix &);

        friend ostream & operator<<(ostream &, const Matrix &);

        void show() const;


    };
}

#endif //CPPLEARN_PRACTICE_CHAPTER_11_H

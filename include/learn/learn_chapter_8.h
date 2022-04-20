//
// Created by Chaos on 2022/3/13.
//

#ifndef CPPLEARN_LEARN_CHAPTER_8_H
#define CPPLEARN_LEARN_CHAPTER_8_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

inline double square(double x) { return x * x; }

void inline_dr();

void refer_0();

double cube(double a);

double refcube(double &a);

void cubes_dr();


struct free_throws {
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws &ft);

void set_pc(free_throws &ft);

free_throws &accumulate(free_throws &target, const free_throws &source);

void strc_ref();


using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);  // has side effect
const string & version3(string & s1, const string & s2);  // bad design

void strquote();

void file_it(ostream & os, double fo, const double fe[],int n);
const int LIMIT = 5;

void filefunc();

const int ArSize = 80;
char * left(const char * str, int n = 1);

void left();

unsigned long left(unsigned long num, unsigned ct);
void leftover();

// function template prototype
template <typename T>  // or class T
void Swap(T &a, T &b);

void funtemp();

template <typename T>     // new template
void Swap(T *a, T *b, int n);

void Show(int a[]);
const int Lim = 8;

void twotemps();

struct job
{
    char name[40];
    double salary;
    int floor;
};

// explicit specialization
template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);

void twoswap();


template <typename T>            // template A
void ShowArray(T arr[], int n);

template <typename T>            // template B
void ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

void tempover();

void choices();
#endif //CPPLEARN_LEARN_CHAPTER_8_H

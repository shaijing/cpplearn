//
// Created by Chaos on 2022/4/10.
//

#ifndef CPPLEARN_LEARN_CHAPTER_11_H
#define CPPLEARN_LEARN_CHAPTER_11_H

#include <iostream>
#include <cmath>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype

class Time_0 {
private:
    int hours;
    int minutes;
public:
    Time_0();

    explicit Time_0(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time_0 Sum(const Time_0 &t) const;

    void Show() const;
};

void use_time_0();

class Time_1 {
private:
    int hours;
    int minutes;
public:
    Time_1();

    explicit Time_1(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time_1 operator+(const Time_1 &t) const;

    void Show() const;
};

void use_time_1();


class Time_2 {
private:
    int hours;
    int minutes;
public:
    Time_2();

    explicit Time_2(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time_2 operator+(const Time_2 &t) const;

    Time_2 operator-(const Time_2 &t) const;

    Time_2 operator*(double n) const;

    void Show() const;
};

void use_time_2();


class Time {
private:
    int hours;
    int minutes;
public:
    Time();

    explicit Time(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time operator+(const Time &t) const;

    Time operator-(const Time &t) const;

    Time operator*(double n) const;

    friend Time operator*(double m, const Time &t) { return t * m; }   // inline definition
    friend std::ostream &operator<<(std::ostream &os, const Time &t);

};

void use_time();

namespace VECTOR {
    class Vector {
    public:
        enum Mode {
            RECT, POL
        };
        // RECT for rectangular, POL for Polar modes
    private:
        double x;          // horizontal value
        double y;          // vertical value
        double mag;        // length of vector
        double ang;        // direction of vector in degrees
        Mode mode;         // RECT or POL
        // private methods for setting values
        void set_mag();

        void set_ang();

        void set_x();

        void set_y();

    public:
        Vector();

        Vector(double n1, double n2, Mode form = RECT);

        void reset(double n1, double n2, Mode form = RECT);

        ~Vector();

        double xval() const { return x; }       // report x value
        double yval() const { return y; }       // report y value
        double magval() const { return mag; }   // report magnitude
        double angval() const { return ang; }   // report angle
        void polar_mode();                    // set mode to POL
        void rect_mode();                     // set mode to RECT
        // operator overloading
        Vector operator+(const Vector &b) const;

        Vector operator-(const Vector &b) const;

        Vector operator-() const;

        Vector operator*(double n) const;

        // friends
        friend Vector operator*(double n, const Vector &a);

        friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    };

}   // end namespace VECTOR

class Stonewt {
private:
    enum {
        Lbs_per_stn = 14
    };      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
public:
    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();

    void show_lbs() const;        // show weight in pounds format
    void show_stn() const;        // show weight in stone format
};


void display(const Stonewt &st, int n);

void stone();

// stonewt1.h -- revised definition for the Stonewt class
class Stonewt_1 {
private:
    enum {
        Lbs_per_stn = 14
    };      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
public:
    Stonewt_1(double lbs);          // construct from double pounds
    Stonewt_1(int stn, double lbs); // construct from stone, lbs
    Stonewt_1();                    // default constructor
    ~Stonewt_1();

    void show_lbs() const;        // show weight in pounds format
    void show_stn() const;        // show weight in stone format
// conversion functions
    operator int() const;

    operator double() const;
};

// stone1.cpp -- user-defined conversion functions
void stone_1();

#endif //CPPLEARN_LEARN_CHAPTER_11_H

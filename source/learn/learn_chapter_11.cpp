//
// Created by Chaos on 2022/4/10.
//

#include "../../headers/learn/learn_chapter_11.h"




Time_0::Time_0()
{
    hours = minutes = 0;
}

Time_0::Time_0(int h, int m )
{
    hours = h;
    minutes = m;
}

void Time_0::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time_0::AddHr(int h)
{
    hours += h;
}

void Time_0::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time_0 Time_0::Sum(const Time_0 & t) const
{
    Time_0 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time_0::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}

void use_time_0(){
    using std::cout;
    using std::endl;
    Time_0 planning;
    Time_0 coding(2, 40);
    Time_0 fixing(5, 55);
    Time_0 total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;
};


Time_1::Time_1()
{
    hours = minutes = 0;
}

Time_1::Time_1(int h, int m )
{
    hours = h;
    minutes = m;
}

void Time_1::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time_1::AddHr(int h)
{
    hours += h;
}

void Time_1::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time_1 Time_1::operator+(const Time_1 & t) const
{
    Time_1 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time_1::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}

void use_time_1(){
    using std::cout;
    using std::endl;
    Time_1 planning;
    Time_1 coding(2, 40);
    Time_1 fixing(5, 55);
    Time_1 total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    // operator notation
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;

    Time_1 morefixing(3, 28);
    cout << "more fixing time = ";
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);
    // function notation
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;

}


Time_2::Time_2()
{
    hours = minutes = 0;
}

Time_2::Time_2(int h, int m )
{
    hours = h;
    minutes = m;
}

void Time_2::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}
void Time_2::AddHr(int h)
{
    hours += h;
}

void Time_2::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time_2 Time_2::operator+(const Time_2 & t) const
{
    Time_2 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time_2 Time_2::operator-(const Time_2 & t) const
{
    Time_2 diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}
Time_2 Time_2::operator*(double mult) const
{
    Time_2 result;
    long totalminutes = hours * mult * 60 + minutes * mult;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

void Time_2::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}

void use_time_2(){
    using std::cout;
    using std::endl;
    Time_2 weeding(4, 35);
    Time_2 waxing(2, 47);
    Time_2 total;
    Time_2 diff;
    Time_2 adjusted;

    cout << "weeding time = ";
    weeding.Show();
    cout << endl;

    cout << "waxing time = ";
    waxing.Show();
    cout << endl;

    cout << "total work time = ";
    total = weeding + waxing;   // use operator+()
    total.Show();
    cout << endl;

    diff = weeding - waxing;    // use operator-()
    cout << "weeding time - waxing time = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;      // use operator+()
    cout << "adjusted work time = ";
    adjusted.Show();
    cout << endl;
}


Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m )
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time & t) const
{
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time Time::operator*(double mult) const
{
    Time result;
    long totalminutes = hours * mult * 60 + minutes * mult;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}
void use_time(){
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Tosca:\n";
    cout << aida<<"; " << tosca << endl;
    temp = aida + tosca;     // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida* 1.17;  // member operator*()
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
}


using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    // compute degrees in one radian
    const double Rad_to_deg = 45.0 / atan(1.0);
    // should be about 57.2957795130823

    // private methods
    // calculates magnitude from x and y
    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }

    // set x from polar coordinate
    void Vector::set_x()
    {
        x = mag * cos(ang);
    }

    // set y from polar coordinate
    void Vector::set_y()
    {
        y = mag * sin(ang);
    }

    // public methods
    Vector::Vector()             // default constructor
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    // construct vector from rectangular coordinates if form is r
    // (the default) or else from polar coordinates if form is p
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    // reset vector from rectangular coordinates if form is
    // RECT (the default) or else from polar coordinates if
    // form is POL
    void Vector:: reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector()    // destructor
    {
    }

    void Vector::polar_mode()    // set to polar mode
    {
        mode = POL;
    }

    void Vector::rect_mode()     // set to rectangular mode
    {
        mode = RECT;
    }

    // operator overloading
    // add two Vectors
    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    // subtract Vector b from a
    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    // reverse sign of Vector
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    // multiply vector by n
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    // friend methods
    // multiply n by Vector a
    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }

    // display rectangular coordinates if mode is RECT,
    // else display polar coordinates if mode is POL
    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if (v.mode == Vector::RECT)
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)
        {
            os << "(m,a) = (" << v.mag << ", "
               << v.ang * Rad_to_deg << ")";
        }
        else
            os << "Vector object mode is invalid";
        return os;
    }

}  // end namespace VECTOR

//
// Created by Chaos on 2022/3/4.
//
#include "practice/practice_chapter_3.h"

void get_hight() {
    float high;
    const double factor = 0.08333;
    cout << "Please enter your hight:______\b\b\b\b\b\b";
    cin >> high;
    cout << "Your hight: " << high << " inch is " << high * factor << " foot\n";
}

void degree() {
    double de, mi, se;
    cout << "Please enter a latitude in degrees, minutes, and seconds:\n"
         << "First, enter the degrees: ";
    cin>>de;
    cout<<"Next, enter the minutes of arc: ";
    cin>>mi;
    cout<<"Finally, enter seconds of arc: ";
    cin>>se;
    double res = de+mi/60+se/3600;
    cout<<de<<" degress, "<<mi<<" minutes, "<<se<<" seconds = "<<res<<" degrees";


}
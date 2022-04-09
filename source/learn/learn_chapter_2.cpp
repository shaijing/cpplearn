//
// Created by Chaos on 2022/2/27.
//
#include "../../headers/learn/learn_chapter_2.h"

void getinfo() {
    int carrots;
    cout << "How many carrots do you  have?" << endl;
    cin >> carrots;//c++ input
    cout << "Here are two more." << endl;
    carrots = carrots + 2;
    cout << "Now you have " << carrots << "carrots." << endl;

}

void sqrt() {
    double area;
    cout << "Enter the floor area, in square feet.of your home:";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;

}

void ourfunc() {
    simon(3);
    cout << "Pick an intrger: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
}

void simon(int n) {
    cout << "Simon says touch your toes " << n << " time." << endl;
}

void convert() {
    int stone;
    cout << "Enter the wight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone= ";
    cout << pounds << " pounds." << endl;
}

int stonetolb(int sts) {
    return 14 * sts;
};
//
// Created by Chaos on 2022/3/10.
//

#ifndef CPPLEARN_LEARN_CHAPTER_10_H
#define CPPLEARN_LEARN_CHAPTER_10_H

#include <string>

class Stock00 {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() {
        total_val = shares * share_val;
    }

public:
    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void update(double price);

    void sell(long num, double price);

    void show();

};

void use_stock00();

class Stock01 {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    Stock01();        // default constructor
    Stock01(const std::string &co, long n = 0, double pr = 0.0);

    ~Stock01();       // noisy destructor
    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};

void use_stock01();

class Stock02 {
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    Stock02();        // default constructor
    Stock02(const std::string &co, long n = 0, double pr = 0.0);

    ~Stock02();       // do-nothing destructor
    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show() const;

    const Stock02 &topval(const Stock02 &s) const;
};

void use_stock02();

typedef unsigned long Item;

class Stack {
private:
    enum {
        MAX = 10
    };    // constant specific to class
    Item items[MAX];    // holds stack items
    int top;            // index for top stack item
public:
    Stack();

    bool isempty() const;

    bool isfull() const;

    // push() returns false if stack already is full, true otherwise
    bool push(const Item &item);   // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item &item);          // pop top into item
};

void use_stack();

#endif //CPPLEARN_LEARN_CHAPTER_10_H

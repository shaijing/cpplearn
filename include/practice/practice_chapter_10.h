//
// Created by Chaos on 2022/5/3.
//

#ifndef CPPLEARN_PRACTICE_CHAPTER_10_H
#define CPPLEARN_PRACTICE_CHAPTER_10_H

#include<iostream>

namespace practice_chapter_10 {
    using namespace std;
    class Person {
    private:
        static const int LIMIT = 25;
        string lname;
        string fname;
    public:
        Person(){lname="",fname="";}
        explicit Person(const string & ln,const char *fn="Heyyou");
        void show() const;
        void Formlshow() const;

    };
}


#endif //CPPLEARN_PRACTICE_CHAPTER_10_H
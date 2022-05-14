//
// Created by Chaos on 2022/4/27.
//

#ifndef CPPLEARN_TEST_H
#define CPPLEARN_TEST_H

#include <iostream>

using namespace std;

class User {
private:
    int id;
    string name;
    string password;
    string gender;
    int old;
public:
    User();

    ~User();

    int getId() const;

    void setId(int _id);

    const string &getName() const;

    void setName(const string &_name);

    const string &getPassword() const;

    void setPassword(const string &_password);

    const string &getGender() const;

    void setGender(const string &_gender);

    int getOld() const;

    void setOld(int old);

};

void t1();

#endif //CPPLEARN_TEST_H

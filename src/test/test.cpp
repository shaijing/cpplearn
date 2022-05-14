//
// Created by Chaos on 2022/4/27.
//
#include "test/test.h"

User::User(){
    id =0;
    name ="NULL";
    password = "NULL";
    gender= "NULL";
    old = 0;
};


int User::getId() const  {
    return id;
}
void User::setId(int _id) {
    this->id = _id;
}
const string & User::getName() const {
    return name;
}
void User::setName(const string &_name) {
    this->name = _name;
}

const string & User::getPassword() const {
    return password;
}

void User::setPassword(const string &_password) {
    this->password = _password;
}

const string &User::getGender() const {
    return gender;
}

void User::setGender(const string &_gender) {
    this->gender = _gender;
}
int User::getOld() const{
    return old;
}

void User::setOld(int _old){
    this->old = _old;
}

User::~User() = default;

void t1() {
    User u1, u2;
    u1.setId(1);
    u1.setOld(20);
    u2.setId(2);
    u2.setOld(30);
    cout << u1.getId() << endl
         << u2.getId()<<u2.getGender()<<endl;

}

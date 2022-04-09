//
// Created by Chaos on 2022/3/4.
//
#include "../../headers/practice/practice_chapter_2.h"
void show_info(){
    char name[10];
    char address[20];
    cout<<"Please enter your name and address:"<<endl;
    cin>>name>>address;
    cout<<name<<"Your address: "<<address<<endl;
}

void f_1(){
    cout<<"Three blind mice"<<endl;
    cout<<"Three blind mice"<<endl;
}

void f_2(){
    cout<<"See how they run"<<endl;
    cout<<"See how they run"<<endl;
}

void f_d(){
    f_1();
    f_2();
}

void age_to_months(){
    int age;
    cout<<"Please enter your age: ";
    cin>>age;
    cout<<"Your age in months: "<<age*12<<endl;
}
void temp_convert(){
    int temp;
    cout<<"Please enter a Celius value: ";
    cin>>temp;
    cout<<temp<<" degree Celsius is "<<1.8*temp+32<<" degree Fahrenheit."<<endl;
}
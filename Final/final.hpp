#ifndef STUDENT_H
#define STUDENT_H
#include <iostream> 
#include <string> 
#include <cstdlib>
using namespace std;


class Student {
  
private: 

    string name;
    int num_classes;
    string *class_list;


public: 
Student();

    ~Student();
    void Input();
    void Output();
    void reset();
    Student& operator =(const Student& rhs);


};
#endif
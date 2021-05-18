#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "final.hpp"

using namespace std;

class Student {

  private: 

    string name;
    int num_classes;
    string *class_list;


public: Student(string, int);
        Student();
        ~Student();
        void input();
        void output();
        void reset();
        Student operator = (const Student& rhs);



};

Student::Student() : name(""), num_classes(0), class_list(NULL){}


Student::~Student() {
  num_classes = 0;
  reset();
  name  = " ";
}

Student::Student(string n, int num)
{
   name = n;
   num_classes = num;
   class_list = new string[num];
   for (int i = 0; i < num_classes; i++)
   {
       cout << "Enter the course name : ";
       cin >> class_list[i];
   }
}
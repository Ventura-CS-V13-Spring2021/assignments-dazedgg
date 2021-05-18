#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "final.hpp"

using namespace std;


Student::Student() : name(""), num_classes(0), class_list(NULL){}


Student::~Student() {
  num_classes = 0;
  reset();
  name  = " ";
}

void Student:: reset() {

  if (class_list) {
    delete[] class_list;
    class_list = NULL;
    num_classes = 0;
  }
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
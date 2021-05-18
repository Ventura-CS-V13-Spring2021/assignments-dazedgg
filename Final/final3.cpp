#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "final.hpp"

using namespace std;

Student::Student() : name(" "), num_classes(0), class_list(NULL){}

Student::~Student(){

  num_classes = 0;
  reset();
  name = "";
}

void Student::reset() {
  if (class_list) {
    delete[] class_list;
    class_list = NULL;
    num_classes = 0;


  }
}

void Student::Output() {

  cout << "Class list: " << endl;
  for (int i = 0; i < num_classes; i++) {
    cout << right << i + 1 << class_list[i] << endl;
  }
}

Student& Student::operator =(const Student& rhs)
{
    reset();
    num_classes = rhs.num_classes;
    if (num_classes > 0) {
        class_list = new string[num_classes];
        for (int i = 0; i < num_classes; i++) {
            class_list[i] = rhs.class_list[i];
        }
    }
  
    return *this;

}
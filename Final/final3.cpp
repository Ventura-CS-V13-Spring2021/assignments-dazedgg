#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "final.hpp"

using namespace std;

Student::~Student() {
  resetClass();
}

Student::Student(const Student &rhs) {

  num_classes = rhs.num_classes;
  name = rhs.name;
}

Student::~Student() {

  delete[] class_list;
}

Student &Student::operator=(const Student &rhs) 
{

}

void Student::printAll()const{

  cout <<"Student Name:"<< name << endl;
  cout << "Class List: " << endl
}
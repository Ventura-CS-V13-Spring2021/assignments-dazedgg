#include <iostream>
#include "student.hpp"

using namespace std;

Student::Student(){

  sname = " ";
  id = 0;
}

Student::Student(string stname, int idnum, DOB date, Address addr) {

sname = stname;
id = idnum;
dob = date;
address = addr;


}

int Student::getID()const {

  return id;

}


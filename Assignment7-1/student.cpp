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

string Student::getSname()const {

  return sname;

}

DOB Student::getDOB()const {

return dob;

}

Address Student::getAddress()const{

return address;

}

void Student::setSname(string name) {

sname = name;

}

void Student::setAddress(Address addr) {

address = addr;

}

void Student::setDOB(DOB dob) {

dob = date;

}


void Student::setID(int num) {

id = num;


}

void Student::printStudent(){
cout << "Student's name and ID Number: " << sname << " " << id << "\t" <<endl;
cout << "Address and Date of Birth: ";
address.printAddress();
dob.printDate();
cout << "\n\n";
}
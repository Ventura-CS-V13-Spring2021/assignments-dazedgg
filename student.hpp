#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class {

private:
string name;
int num_classes;
string *class_list;

public:
Student() : name(), num_classes(0), class_list(NULL){}
Student (string n, int num);
Student(Student &rhs);
~Student();
Student &operator=(Student &rhs);
void inputClass(string n, int num);
void resetClass();
void printAll() const;
string getName() const;
int getNumclasses() const;

};

#endif
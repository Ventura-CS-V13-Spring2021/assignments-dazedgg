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

void Student::printAll() {

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

void Student::Input() {

  reset();
  
  cout << "Enter name of the student: " << endl;
  
  cin >> name;
  
  cout << "Enter the amount of classes: " << endl;
  
  cin >> num_classes; 
  
  cin.ignore(2, '\n');
  
  if (num_classes > 0) {
       
        class_list = new string[num_classes];
        
        for (int i = 0; i < num_classes; i++) {
          
            cout << "Enter name of class: " << (i + 1) 
 << " : ";
            
            getline(cin, class_list[i]);
        }
    }
    cout << endl;
}

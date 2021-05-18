#include "final.hpp"
using namespace std;
int main() {
Student obj1, obj2;

obj1.Input();
cout << "Student 1's information: " << endl;
obj1.printAll();
cout << endl;
obj2 = obj1;

cout << "Student 2's information from student 1: " << endl;
obj2.printAll();
obj1.reset();

cout << endl;

cout << "Student 1's information after clearing: " << endl;
obj1.printAll();

cout << "Student 2's information: " << endl;
obj2.printAll();

return 0;
}
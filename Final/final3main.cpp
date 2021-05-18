#include "final.hpp"
using namespace std;
int main() {
Student obj1, obj2;

obj1.Input();
cout << "Student 1's information: " << endl;
obj1.printAll();

obj2 = obj1;

obj1.reset();

cout << "Student 1's information after clearing: " << endl;
obj1.printAll();

cout << "Student 2's information: " << endl;
obj2.printAll();


}
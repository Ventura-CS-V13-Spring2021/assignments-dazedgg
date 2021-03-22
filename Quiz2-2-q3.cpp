#include <iostream>
#include <iomanip>
using namespace std;
// Created by Zakhar G.
int main() {
 
int v1 = rand() % 100;
int v2 = rand() % 100;
int v3 = rand() % 100;

cout << v1 << " " << v2 << " " << v3 << "\n";

if (v1!= v2 && v1 != v3 && v2 != v3) {
  cout << "There is no duplicated numbers.";
} else if(v1 == v2 && v1 == v3 && v2 == v3) {
 cout << "The numbers that are duplicated are: " << v1 << " " << v2 << " " << v3;

} else if(v1 == v2) {
cout << "The duplicated numbers are: " << v1 << " " << v2;
} else if (v2 == v3) {
  cout << "The duplicated numbers are: " << v2 << " " << v3;
} else if(v1 == v3) {
   cout << "The duplicated numbers are: " << v1 << " " << v3;
}

}
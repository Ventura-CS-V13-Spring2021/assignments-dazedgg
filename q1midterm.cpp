#include <iostream>
#include<fstream>
#include <iomanip>
using namespace std;
int main() {
 string stdName;
 double avg, sum =0;
int sc1, sc2;
int total =80;
int num =0;


  ifstream rd;
  rd.open("students.txt");

  while(rd >> stdName >> sc1 >> sc2) {
    sum = sc1 + sc2;
    avg = sum /2;
    if (avg > total) {
      num++;
    }
cout << "Student name: " << stdName << setprecision(5) << " Score 1: " << sc1 << setprecision(5) << " Score 2: " << sc2 << setprecision(5) << " Sum: " << setprecision(5) << " Average: " << avg << "\n";


}
cout << "The total number of students who has the average greater than 80: " << num << endl;
rd.close();
return 0;
}

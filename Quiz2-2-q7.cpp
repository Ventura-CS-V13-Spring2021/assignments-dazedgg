#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// Created by Zakhar G.
int main() {
int numEmp; 
int id;
string str;
string dept;
double salary; 
string c = " ";
int counter = 0;
double totalSalary;
double avg;

ofstream ofs;

cout << "Enter amount of Employees: ";
cin >> numEmp;
ofs.open("employee.txt");
ofs << numEmp << "\n";
cout << numEmp << "\n";
while (counter < numEmp) {
cout << "Enter the employee id: ";
cin >> id;
ofs << id << " ";
cout << "Enter the Employee name: ";
cin >> str;
ofs << str << " ";
cout << "Enter the Dept name: ";
cin >> dept;
ofs << dept << " ";
cout << "Enter the salary for the employee: ";
cin >> salary;
ofs << salary << "\n";
counter++;
}
ofs.close();

ifstream ifs; 

ifs.open("employee.txt");
counter = 0;
ifs >> numEmp;
 cout << setw(10) << "ID" << setw(10) << "Name" << setw(15) << "Department" << setw(10) << "Salary" << endl << endl;
while (counter < numEmp) {
ifs >> id;
ifs >> str;
ifs >> dept;
ifs >> salary;
totalSalary += salary;
cout << setw(10) << id << setw(10) << str << setw(10) << dept << setw(10) << salary << endl << endl;
counter++;
}
avg = totalSalary / numEmp;

cout << "Total: " << totalSalary << " " << "Average: " << avg;






}


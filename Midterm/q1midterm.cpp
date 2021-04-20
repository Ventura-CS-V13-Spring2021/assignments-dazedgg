#include <iostream>
#include<fstream>
#include <iomanip>
using namespace std;
int main() {
 double avg, sum =0;
int sc1, sc2;
int total =80;
int num;


  ifstream rd;
  rd.open("students.txt");

  while(rd >> num >> sc1 >> sc2) {
    sum = sc1 + sc2;
    avg = sum /2;



}
}

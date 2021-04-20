#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
int getRndNumber();
int findMin (int, int, int);
int findMax(int, int, int);
int getDifference(int, int);
void fileWrite(ofstream &, int);

int main() {

  int n1, n2, n3;
  int min, max, diff;
  ofstream q3;
  q3.open("question3.txt");
  srand(time(0));


  
}
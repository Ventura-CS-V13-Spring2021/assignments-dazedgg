#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
int getRndNumber(void);
int findMin (int, int, int);
int findMax(int, int, int);
int getDifference(int, int);
void fileWrite(ofstream &, int);

int main() {
ofstream numbers;
  int n1, n2, n3;
  int min, max, diff;
  ofstream q3;
  q3.open("question3.txt");
  srand(time(0));

do{

  n1 = getRndNumber();
  n2 = getRndNumber();
  n3 = getRndNumber();
  cout << "n1: " << n1 << " n2: " << n2 << " n3: " << endl;
  min = findMin(n1, n2, n3);
  max = findMax(n1, n2, n3);
  cout << "Minimum: " << min << " Maximum: " << max;
  diff = getDifference(min, max);
  cout << "Difference: " << diff << endl;
  fileWrite(numbers, diff);
} while (diff > 3);
numbers.close();
}

int getRndNumber(void) {
  int num = rand() % 10;
  return num;
}

int findMin(int n1, int n2, int n3) {
  int min;
  if (n1 < n2 && n1 < n3) {
    min = n1;
  } else if (n2 < n1 && n2 < n3) {
    min = n2;
  } else if (n3 < n1 && n3 < n1) {
    min = n3;
  }
  return min;
}

int findMax(int n1, int n2, int n3) {
  int max;
  if((n1 >= n2) && (n1>=n3)) {
    max = n1;
  
  } else if ((n2 >= n1) && (n2>=n3)) {
    max = n2;
  } else if ((n3 >= n1) && (n3 >= n2)) {
max = n3;
  }
  return max;
}

int getDifference(int min, int max) {
  int diff;
  diff = max - min;
  return diff;
  
}

void fileWrite(ofstream& numbers, int diff) {
  numbers << diff << endl;
}
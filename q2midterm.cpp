#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
int isGreater(int);
int getRnd(void);
int main() {
int N =10;
ofstream rd;
rd.open("numbers.txt");
srand(time(0));


for (int i; i < N; i++) {
  int rand = getRnd();
  if(isGreater(rand)) {
    rd << rand << endl;
  }
rd.close();
}


int getRnd() {

int rand;
rand = rand() % 50 + 1;
cout << rand << endl;

}
}

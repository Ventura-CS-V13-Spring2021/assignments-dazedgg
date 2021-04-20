#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
int isGreater(int N);
int getRnd(void);
int precNum = 51;


int main() {
int N =10;
int rand;
ofstream rd;
rd.open("Midterm/numbers.txt");
srand(time(0));


for (int i; i <= N; i++) {
  rand = getRnd();
  if(isGreater(rand)) 
    rd << rand << endl;
  }
rd.close();
return 0;
}

int getRnd(void){
int num = rand() % 50 + 1;
return num;
}

int isGreater (int N) {
  if (N > precNum) {
    precNum = N; 
    return 1;
  } else {
    precNum = N; 
    return 0;
  }
}
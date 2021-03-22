#include <iostream>
#include <iomanip>
using namespace std;

// Created by Zakhar G.

int main() {

int ranNum [5];

for(int c = 0; c < 5; c++) {
ranNum[c] = rand() % 100;
}

for (int i = 0; i < 5; i++) {
  for (int j = i; j < 5; j++) {
    if(ranNum[i] > ranNum[j]) {
      int temp;
      temp = ranNum[j];
      ranNum[j] = ranNum[i];
      ranNum[i] = temp;

    }
    


  }

}
for (int l = 0; l < 5; l++) {
  cout << ranNum[l] << " ";
}
cout << "The two highest numbers are: " << ranNum[3] << ", " << ranNum[4];
}

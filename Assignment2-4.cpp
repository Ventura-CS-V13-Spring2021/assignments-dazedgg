#include <iostream>
using namespace std;
// Created by Zakhar Gazizov
int main() {

char test;

test = 'A';
int counter = 0;

while(test <='Z') {
  counter++;
  cout << test << " ";
  test = test +1;
  if (counter == 5 ) {
  counter = 0;
  cout << '\n';
  
  }
}

}
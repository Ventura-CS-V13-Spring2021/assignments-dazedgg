#include "IntegerArray.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;


int IntegerArray::getLength(void) const
{

    return length;
}

void IntegerArray::printAll(void) const
{

    for (int i = 0; i < length; i++) {
      cout << numbers[i] << "\t";
    }
}
void IntegerArray::fillUp(void)
{
  int i;

  for (int i = 0; i < N; i++) {
    numbers[i] = rand() % 100;
    length = N;

  }
   
}
void IntegerArray::sortArray(int flag)
{
 
 if (flag == 0) {
 sort(numbers, numbers + length);
 } else {
   sort(numbers, numbers + length, greater<int>());
 }
  
}

void IntegerArray::getPrimenumbers(void) const {
 int count = 0;
    for (int i =0; i < length; i++) {
      for (int j = 2; j<= numbers[i]; j++) {
        if (numbers [i] % j == 0) {
          break;

        } if (j>= numbers[i]) {
          count++;
        } 
      }
    }
    cout << count << endl;
}

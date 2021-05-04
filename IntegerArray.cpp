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
int IntegerArray::getLastelm(void) const
{

    return numbers[length-1];
}
void IntegerArray::printAll(void) const
{

    for (int i = 0; i < length; i++) {
      cout << numbers[i] << "\t";
    }
}
void IntegerArray::fillUp(void)
{
  
  srand(time(0));

  for (int i = 0; i < length; i++) {
    numbers[i] = rand() % 100 + 1;
    length = N;
  }
   
}
void IntegerArray::sortAsc()
{
  sort(numbers, numbers + length);



   
}
void IntegerArray::removeLastelm(void)
{

   length--;
}
void IntegerArray::appendElement(int v)
{

    numbers[length] = v;
    
 
     length++;
}

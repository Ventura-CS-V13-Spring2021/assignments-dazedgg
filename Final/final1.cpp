#include <iostream>
#include <time.h>
using namespace std;




int getNumDiv(int* arr, int div, int length) {

int count = 0;
for (int i = 0; i < length; i++) {

  if ( div % arr[i] == 0) {
    count ++;
  }
}
return count;
}



int main() {
  srand (time(NULL));

int length = (rand() % 10) + 5;
int arr[length];

for (int i = 0; i < length; i++) {

  arr[i] = (rand()% 100) + 1;

  cout << arr[i] << " ";

}
cout << endl;

int max = 0;

int num, index;

int div[length];

for (int i = 0; i < length; i++) {

  div[i] = getNumDiv(arr,  arr[i], length);
}

for (int i = 0; i < length; i++ ) {

if (div[max] < div[i])

max = i;

}

cout << "The greatest number that is divisible is: " << arr[max];

}
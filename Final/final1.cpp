#include <iostream>
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


int arr[] = {1, 2, 4, 6, 10, 24};

int length = sizeof(arr)/sizeof(arr[0]);

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

}
#include    <iostream>
using namespace std;
// Zakhar Gazizov

int main()
{
    const int SIZE=10;
    int     numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
    int     diff[10];
    int     sum=0;

    for (int i = 0; i < SIZE;i++) {
      sum += numbers[i];
      cout << numbers[i] << " ";
    }
  for (int i=0; i<SIZE; i++) {
    diff[i] = sum - numbers[i];
    cout << diff[i] << " ";
  }
}


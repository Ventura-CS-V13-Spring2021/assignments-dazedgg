#include    <iostream>
#include <ctime>
using namespace std;
void makebinary(int [], int);
void printbinary(int [], int);
void count0cluster(int [], int);
int main()
{
    const int SIZE = 20;
    int     binary[SIZE];

    srand(time(0));
    makebinary(binary, SIZE);
    printbinary(binary, SIZE);
    count0cluster(binary, SIZE);
}
void makebinary(int num[], int size)
{
    for(int i=0;i<size; i++)
        num[i] = rand() % 2;
}
void printbinary(int num[], int size)
{
    for(int i=0;i<size; i++)
        cout << num[i] << " ";
    cout << endl;
}
void count0cluster(int bin[], int size)
{
  int counter = 0;
  if (bin[0] == 0) {
    counter++;
  }
  for (int i = 1; i < size; i++) {
    if(bin[i] == 0 && bin[i-1] !=0) {
      counter++;
    }
  }
  cout << counter << endl;
}
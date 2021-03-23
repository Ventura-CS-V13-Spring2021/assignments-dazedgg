#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  int randnum;
  int N;
  int sum=0;
  int avg;
  ifstream   rdfile;

  rdfile.open("randnum.txt");
  rdfile >> N;
  for(int i; i<N; i++)
  {
    rdfile >> randnum;
    sum += randnum;
    cout << randnum << endl;
  }
  avg = randnum / N;
  cout << "Total amount of numbers: " << N << endl;
  cout << "Sum: " << sum << endl;
  cout << "Average: " << avg << endl;
  
  
  

  rdfile.close();
}
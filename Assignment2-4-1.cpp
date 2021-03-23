#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

  int randnum;
  int N;
  ofstream rdfile;

  rdfile.open("randnum.txt");

  cout << "Enter the number of randnum \n";
  cin >> N;
  rdfile << N << endl;
  srand(time(0));
  for(int i; i<N; i++)
  {
    randnum = random() % 100;
    rdfile << randnum << endl;
  }

  rdfile.close();
  
}
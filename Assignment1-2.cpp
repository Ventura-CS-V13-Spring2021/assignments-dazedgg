#include <iostream>
using namespace std;
int main () {
  double Celcius, Fahrenheit;
  cout << "Enter the temperature by Celcius\n";
  cin >> Celcius;
  Fahrenheit = (9.0/5.0)*Celcius+32;
  cout << "Celcius " << Celcius << " is " << Fahrenheit << " Fahrenheit.";
}
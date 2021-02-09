#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const double rateA = 15.00;
  const double rateB = 12.00;
  const double rateC = 9.00;
  double seatA, seatB, seatC;
  double total_amount;
  cout << "Enter how many tickets were sold for seat A: ";
  cin >> seatA;
  cout << "Enter how many tickets were sold for seat B: ";
  cin >> seatB;
  cout << "Enter how many tickets were sold for seat C: ";
  cin >> seatC;

  seatA = seatA * rateA;
  seatB = seatB * rateB;
  seatC = seatC * rateC;
  total_amount = seatA + seatB + seatC;
  cout << "The total amount of money that was generated was: $ " << fixed << setprecision(2) << total_amount;

 return 0;
}

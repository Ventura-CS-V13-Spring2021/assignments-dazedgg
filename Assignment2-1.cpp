#include <iostream>
using namespace std;
int main()
// Created by Zakhar Gazizov
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     if (number1 > number2 && number1 > number3) {
       cout << "Number 1 is the greatest value out of all three.";
       
       
     } else if(number2 > number1 && number2 > number3) {
        cout << "Number 2 is the greatest value out of all three.";
     } else {
       cout << "Number 3 is the greatest value.";
     }
     return 0;
}
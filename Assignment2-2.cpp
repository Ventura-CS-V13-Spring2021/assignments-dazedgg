#include <iostream>
using namespace std;
int main()
// Created By Zakhar Gazizov 
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     if (number1 != number2 && number1 != number3 && number2 != number3) {
       cout << "All numbers are distinct.";
     } else if (number1 == number2 && number1 == number3 && number2 == number3)  {
       cout << "All numbers are the same.";
     }  
     else if(number1 == number2 || number2 == number3 || number1 == number3) {
       cout << "There are duplicated numbers with one another.";
       }
         return 0;
}
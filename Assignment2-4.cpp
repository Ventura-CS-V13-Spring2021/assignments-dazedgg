#include <iostream>
using namespace std;
// Created by Zakhar Gazizov
int main() {

char test;

test = 'A';
int counter = 0;

while(test <='Z') {
	// counter++;
	cout << test << " ";
	test = test +1;
	// if (counter == 5 ) {
	//   // for readability, need to keep the indentation rule
	// 	counter = 0;
	// 	cout << '\n';
	// }
	// Insted of counter,
	// we can use the "test" var to control "newline"
	if (test % 5 == 0 ) {
		cout << '\n';
	}

}

}
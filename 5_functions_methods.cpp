#include <iostream>
#include <string>

using namespace std;

/************************* Example 1 - Create a function and using *********************/

// Even or not
// @number : Number to decide
// @return : True if the number is even, otherwise False
int even(int number){
	return number % 2 == 0;
}

/********************************** Example 2 - Recursion ******************************/

// Factorial of number
// @number : Number
// @return : Factorial value of number
int factorial(int value){
	if (value <= 1)
		return 1;
	return value * factorial(value -1);
}

// Fibonacci
// @value : Number
// @return : Fibonacci value
int fibonacci(int value){
	if (value == 0) {
		return 0;
	} else if (value == 1) {
		return 1;
	}
	return fibonacci(value-1)+fibonacci(value-2);
}

/******************************* Example 3 - Inline Function ***************************/

inline void hello(){
	cout << "Hello\n";
}

/************************************** Function Main **********************************/

int main(int argc, char *argv[]) {

	// Testing Function even
	int j;
	for (j = 0; j < 10; ++j) {
		if (even(j) != 0) {
			cout << j << " - Even\n";
		} else {
			cout << j << " - Odd\n";
		}
	}

	// Testing Function factorial and fibonacci
	int number = 7;
	cout << "Factorial of " << number << " is " << factorial(number) << endl;
	cout << "Fibonacci of " << number << " is " << fibonacci(number) << endl;

	// Testing hello
	hello();

	return 0;
}
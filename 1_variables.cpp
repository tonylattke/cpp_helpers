#include <iostream>
#include <string>

using namespace std;

int main() {

	/*************************** Printing Variables **************************/
	
	// Using Strings
	string foo = "World";
	cout << "Hello " << foo << endl;

	// Using numbers
	int minutes = 60;
	cout << "1 Hour have " << minutes << " minutes.\n";	

	// Using Floating point numbers
	float celcius   = 0;
	float farenheit = 32 + celcius*(9.0/5);
	cout << celcius << " Celcius are " << farenheit << " Farenheit grades\n";	

	// Using Double floating point numbers with fixed amount digits of the right
	// Only the first 10 first digits of phi will be showed precision 10
	double phi   = 1.618033988749894848;
	cout.precision(10);
	cout << "The golden ratio " << phi << endl;
	
	// Representation Hexadecimal of numbers (hex allow print Hexadecimal)
	int red 	= 0xFF0000;
	int green 	= 0x00FF00;
	int blue	= 0x0000FF;

	cout << "Hexadecimal code of:\nRed is: " << hex << red << "\nGreen is: " << green << "\nBlue is: " << blue << "\n";
	// Use Decimal  dec
	// Use Octal 	oct

	return 0;
	
}
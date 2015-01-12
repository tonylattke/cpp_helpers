#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

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
	cout << dec;

	// Print text with multiline string
	cout << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Phasellus mattis ac tortor sed fringilla. Etiam aliquam\
turpis sit amet nisi molestie, nec accumsan massa tempus\n";

	/************************** Operating Variables **************************/
	
	// Numbers
	int p_foo = 23;
	int p_bar = 19;
	int p_baz = p_foo + p_bar; // Plus
	cout << p_foo << " + " << p_bar << " = " << p_baz << endl;

	int m_foo = 69;
	int m_bar = 27;
	int m_baz = m_foo - m_bar; // Minus
	cout << m_foo << " - " << m_bar << " = " << m_baz << endl;

	int mu_foo = 7;
	int mu_bar = 6;
	int mu_baz = mu_foo * mu_bar; // Multiply
	cout << mu_foo << " * " << mu_bar << " = " << mu_baz << endl;

	int d_foo = 420;
	int d_bar = 10;
	int d_baz = d_foo / d_bar; // Divide
	cout << d_foo << " / " << d_bar << " = " << d_baz << endl;

	int mo_foo = 429;
	int mo_bar = 43;
	int mo_baz = mo_foo % mo_bar; // Module
	cout << mo_foo << " mod " << mo_bar << " is " << mo_baz << endl;

	double po_foo = 6.48074069840786;
	int po_bar = 2;
	int po_baz = pow(po_foo,po_bar); // Pow
	cout << po_foo << " to the power of " << po_bar << " is " << po_baz << endl;

	// Strings
	string s_foo = "C++ ";
	string s_bar("Works"); // Just other string declaration way
	string s_baz = s_foo + s_bar;
	cout << s_baz << endl;

	// String to char*
	char* name = new char(s_baz.length()+1);
	strcpy(name,s_baz.c_str());

	// Simple character
	char c_foo = 'T';
	cout << c_foo << endl;

	string r_foo = "Lorem ipsum dolor sit amet";
	cout << "Size: " << r_foo.size() << endl; // String Size

	replace(r_foo.begin(), r_foo.end(), ' ', '_');  // String replace
	cout << r_foo << endl;

	string a_foo("Lorem ipsum dolor sit amet");
	cout << a_foo[0] << endl; // First char on string "Lorem ipsum dolor sit amet"
	cout << a_foo.substr(6,12) << endl; // 6 till 12 chars on string "Lorem ipsum dolor sit amet"
	cout << a_foo.substr(0,5) << endl; // First 5 chars on string "Lorem ipsum dolor sit amet"
	cout << a_foo.substr(6,a_foo.size()-1) << endl; // 6 till the end chars on string "Lorem ipsum dolor sit amet"


	return 0;

}
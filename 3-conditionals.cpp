#include <iostream>
#include <string>

using namespace std;

int main() {

	// Commpare Values
	int aux = 23;
	bool equal 			= aux == 42;
	bool not_equal 		= aux != 42;

	bool less_than 		= aux < 42;
	bool more_than 		= aux > 42;
	bool less_equal_than= aux <= 42;
	bool more_equal_than= aux >= 42;

	bool operator_or	= aux < 23 || aux > 42;
	bool operator_and	= aux < 23 && aux > 42;	
	
	// If .. then .. else ..
	int number = 23;
	if (number == 23) {
		cout << "Number is 23\n";
	} else {
		cout << "Number is not 23\n";
	}

	// If .. then .. else if .. then .. else ..
	string name1 = "Tony";
	string name2 = "Enrique";
	string name  = "Heinrich";
	if (name.compare(name1) == 0) {
		cout << "It is Tony\n";
	} else if (name.compare(name2) == 0) {
		cout << "It is Enrique\n";
	} else {
		cout << "It\'s not Tony or Enrique\n";
	}

	return 0;

}
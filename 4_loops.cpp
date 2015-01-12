#include <iostream>
#include <string>

using namespace std;

int main() {
	
	// While .. then ..
	cout << "While\n";
	int i = 1;
	while (i < 5) {
		cout << i << endl;
		i++; // i += 1; also works
	}

	// // While with function break
	cout << "While with break\n";
	i = 5;
	int result = 1;
	while (true) {
		result *= i;
		if (i <= 1) {
			cout << result << endl;
			break;
		}
		i--; // i -= 1; also works
	}

	// While with continue
	cout << "While with continue\n";
	i = 5;
	result = 1;
	while (result *= i) {
		if (i > 1) {
			i--;
			continue;	
		}
		cout << result << endl;
		break;
	}

	// do .. while
	cout << "Do while\n";
	i = 5;
	result = 1;
	do {
		result *= i;
		i--;
	} while (i > 1);
	cout << result << endl;
	
	// For
	cout << "For\n";
	int x;
	for ( x = 0; x < 5; x++ ) {
		cout << x << endl;
	}

	return 0;

}
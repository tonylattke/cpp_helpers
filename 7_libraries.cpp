#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <math.h>

using namespace std;

int main() {
	/************************************** Datetime ***********************************/

	// Now
	chrono::time_point<chrono::system_clock> tm;
    tm = chrono::system_clock::now();
    time_t c_time = chrono::system_clock::to_time_t(tm);
    cout << ctime(&c_time);

    // Now - 2 Hours
	time_t two_hours  = c_time - 2 * 60 * 60;
	cout << ctime(&two_hours);

	// /**************************************  Math **************************************/

	// Elemental numbers
	float aux_pi = M_PI;
	float aux_exp = exp(1);
	float phi = (1 + sqrt(5))/2;

	int x = 10;

	// //  It's a number
	if (isdigit(x) == 0) {
		cout << "Is a number\n";
	} else {
		cout << "Is not a number\n";
	}
	// We also have isalpha

	float res_round = round(10);	// Round x

	float res_exp = exp(10); 		// e to the power of x

	float res_log = log(10); 		// Default base e - log10 for logarithm base 10

	float res_sqrt = sqrt(10);

	float res_sin = sin(10);
	float res_cos = cos(10);
	float res_tan = tan(10);

	// /************************************** Random *************************************/

	srand(time(0));
	int rand_value = rand();  // Number between 0 and RAND_MAX
	cout << rand_value << endl;

	// Random number betwen 0 and 1
	double rand_0_1 =(double)rand() / (double)RAND_MAX;

	int lost[] = { 4, 8, 15, 16, 23, 42 };

	// Random member of array
	int value_lost = lost[rand() % 6];
	cout << value_lost << endl;

	// Random int on range
	int range = 50;
	int minimum = 100;
	int random_number = rand() % range + minimum;

	return 0;
	
}
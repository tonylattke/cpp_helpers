#include <iostream>
#include <tuple>		// Tuple
#include <utility>		// Pair
#include <string>
#include <array>
#include <list>
#include <map>

using namespace std;

int main() {

	/*************************************** Pair **************************************/

	// Tuple
	pair<string,string> mytuplepair("Bruce","Wayne");
	pair<string,string> mytuplepair2 = make_pair("Tony","Stark");

	// Access on pair
	cout << "Name 1: " << mytuplepair.first << ' ' << mytuplepair.second << endl;

	// Replace on Pair
	mytuplepair2.second = "Lattke";
	cout << "Name 2: " << mytuplepair2.first << ' ' << mytuplepair2.second << endl;

	/*************************************** Tuple *************************************/

	// Triplet
	tuple<string,string,string> triplet("Red", "Green", "Blue");

	// N-Tuple
	tuple<string,string,string,string,string,string> ntuple("Batman", "Superman", "Wonder Woman", "Green Light", "Flash", "J\'onn");

	// Access on Tuple
	cout << "Value 0 on triplet: " << get<0>(triplet) << endl;

	//  Replacing is not suporting on tuples

	// Get size of tuple
	cout << "Tuple size: " << tuple_size<decltype(triplet)>::value << endl;

	/************************************* Pointers ************************************/
	
	float value1 = 3.1416;
	float *pi = &value1;
	cout << "PI number is " << *pi << endl;

	/************************************* Arrays **************************************/

	// Empty Array with 3 slots
	int empty_array[3];
	// Other way of declaration
	int* empty_array2 = new int(3);

	// Insert elements on array
	empty_array[0] = 1;
	empty_array[1] = 2;
	empty_array[2] = 3;

	// Array loaded
	int lost[] = {4, 8, 15, 16, 23, 42};

	// Length of array
	cout << "Lost numbers are only " << (int) (sizeof(lost) / sizeof(int)) << " numbers\n";

	// Concat
	int array1[] = { 1, 2, 3 };
	int array2[] = { 4, 5, 6, 7, 8, 9, 10 };
	int size1 = (int) (sizeof(array1) / sizeof(int));
	int size2 = (int) (sizeof(array2) / sizeof(int));
	int* array_total = new int(size1 + size2);
	copy(array1, array1 + size1,array_total);
	copy(array2, array2 + size2,array_total + size1);

	// Access to diferents elements
	int squares[] = { 1, 4, 9, 16, 36 };
	int a = squares[0];
	
	// Change value of element on array
	squares[4] =25;

	// Array inside array
	int* array3[] = { array1, array2 };

	// Delete array
	// Must Check

	/*************************************** List **************************************/

	// Empty list
	list<int>* empty_list = new list<int>();

	// Append elements to the list
	empty_list->push_back(1);
	empty_list->push_back(2);
	empty_list->push_back(3);

	// Print values on list
	list<int>::iterator iterador = empty_list->begin();
	list<int>::iterator end_list = empty_list->end();
	cout << "Values ";
	while ( iterador != end_list ) {
		cout << " " << *iterador; // Access to diferents elements
		iterador++;
	}
	cout << endl;

	// Delete the last element
	//empty_list->pop_back();

	// Delete the first element
	empty_list->pop_front();

	// List loaded is not supported

	// Length of list
	cout << "Size of list: " << empty_list->size() << endl;

	// Concat lists
	list<int>* b = new list<int>();
	b->push_back(5);
	b->push_back(4);
	empty_list->insert(empty_list->end(), b->begin(), b->end()); // Copy elements of b and instert into empty_list

	// Sort list
	b->sort();

	/*************************************** Dictionary ********************************/

	// Empty dictionary
	map<string,string>* dictionary = new map<string,string>();

	(*dictionary)["a"] = "Alice";
	(*dictionary)["e"] = "Erick";
	(*dictionary)["i"] = "Isaac";
	(*dictionary)["o"] = "Oscar";
	(*dictionary)["u"] = "Ursula";

	// Print content
	map<string,string>::iterator it 	= dictionary->begin();
	map<string,string>::iterator end2	= dictionary->end();
	while (it != end2) {
		cout << it->first << " => " << it->second << endl;
		++it;
	}
		
	// Access (must check)
	// map<string,string>::iterator it2 = dictionary->find("i");
	// it2->second;

	// Erase element by key (must check)
	// dictionary->find("i");

	// Number of elements
	cout << dictionary->size() << endl;

	/********************************* Arithmetic Conversions **************************/

	long double long_double;
	double normal_double;
	float normal_float;
	unsigned long long uns_l_l;
	long long l_l;
	unsigned long uns_l;
	long l;
	unsigned int uns_i;
	int i;

	return 0;

}
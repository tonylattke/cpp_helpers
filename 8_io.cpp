#include <iostream>
#include <string>
#include <fstream>

#include <cstring>

using namespace std;

int main() {
	/*********************************** Input reading *********************************/
	
	string name;

	cout << "Introduce the file name: ";
	cin >> name;
	
	/************************************ Create file **********************************/

	ofstream file;
	file.open (name.c_str());
	
	// Write the text
	file << "test on file\n";
	file << "second text\n";
	
	// Close the file
	file.close();

	// ************************************ Read file **********************************

	string line;
	ifstream file2 (name.c_str());
	if (file2.is_open()) {
		// Read all lines
		while ( getline (file2,line) ){
			cout << line << endl;
		}
	}
	
	// Reset the seek (position 0 on file)
	file2.seekg (ios::beg);

	// Close the file
	file2.close();

	return 0;
}
#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

// Class Person
class Person {
	public:
		// Constructor and destructor
		Person(string name, unsigned int age);
		~Person();
		
		// Get
		string getName();
		unsigned int getAge();

		// Data
		string name;
		unsigned int age;
};

#endif
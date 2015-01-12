#include <iostream>
#include <string>

#include "person.h"

using namespace std;

int main() {

	// Use imported structure
	Person* aux = new Person("Bruce", 28);
	string name = aux->getName();
	unsigned int age = aux->getAge();

	return 0;
}
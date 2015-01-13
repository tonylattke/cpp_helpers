#include <iostream>
#include <string>

#include "person.h"
#include "hero.h"

using namespace std;

int main() {

	// Use imported Classes

	// Person
	Person* aux = new Person("Bruce", 28);
	string name = aux->getName();
	unsigned int age = aux->getAge();

	// Hero Template
	Hero<int> aux2(42);

	return 0;
}
#include "person.h"

Person::Person(string name, unsigned int age){
	this->name= name;
	this->age = age;
}

Person::~Person() {
	name.clear();
}

string Person::getName() {
	return name;
}

unsigned int Person::getAge(){
	return age;
}
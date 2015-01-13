#include <iostream>
#include <string>

using namespace std;

/************************************* Enumeration *************************************/ 

enum Nationality { GERMAN, AMERICAN, VENEZUELAN };

/************************************ Creating Class ***********************************/

// Color
class Color{
	public:
		unsigned int r;
		unsigned int g;
		unsigned int b;
};

// To string function for Color
ostream& operator<<(ostream &strm, const Color &value) {
	return strm << "R: " << value.r << " G: " << value.g << " B: " << value.b;
}

// Creating a class with Initialize method
class Person {
	public:
		Person();
		Person(string a, unsigned int b);
		~Person(); // Destructor
		void hello();

		string name;
		unsigned int age;
};

// Constructor Sample 1
Person::Person() {
	name= "Tony";
	age = 24;
}

// Constructor Sample 2 -- You can change parameters order
Person::Person(string name, unsigned int age){
	this->name= name;
	this->age = age;
}

// Destructor
Person::~Person(){
	cout << "Delete Person" << endl;
	name.clear();
}

void Person::hello(){
	cout << "Hello " << name << endl;
}

/************************************ Inheritance **************************************/
class Civil: public Person {
	public:
		Civil(string a, unsigned int b, string c);
	private:
		string profesion_name;
};

Civil::Civil(string a, unsigned int b, string c){
	name 			= a;
	age				= b;
	profesion_name	= c;
}

int main() {

	// Use enumeration
	Nationality aux0 = GERMAN;
	// You can also enumeration values of the same class compare
	
	// Create Color
	Color* aux = new Color();
	cout << *aux << endl;

	// Change values on class
	aux->r = 150;
	cout << *aux << endl;

	// Initialize with own Constructor
	Person* aux2 = new Person("Bruce", 28);
	aux2->hello();

	// Change value inside class
	aux2->name = "Tony";
	aux2->hello();

	// Create instance without pointers
	Person aux3("Dominic",0);
	
	// Delete instance
	delete aux2;
	// aux3 will be automatically deleted

	// Inheritance initialize
	Civil* aux5 = new Civil("Tony", 24, "Programmer");
	delete aux5;

	return 0;

}
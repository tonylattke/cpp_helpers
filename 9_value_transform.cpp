#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// char* to value

char charCToChar(char* v){
	return v[0];
}

int charCToInt(char* v){
	char* valor = (char*) v;
	return atoi(valor);
}

float charCToFloat(char* v){
	char* valor = (char*) v;
	return atof(valor);
}

double charCToDouble(char* v){
	double d;
	char* valor = (char*) v;
	sscanf(valor,"%lf",&d);
	return d;
}

bool charCToBool(char* v){
	if (v[0] == 't'){
		return true;
	}
		return false;
}

// String to value

char stringToChar(string v){
	return v[0];
}

int stringToInt(string v){
  istringstream buffer(v);
  int valor;
  buffer >> valor;
  return valor;
}

float stringToFloat(string v){
  istringstream buffer(v);
  float valor;
  buffer >> valor;
  return valor;
}

double stringToDouble(string v){
  istringstream buffer(v);
  double valor;
  buffer >> valor;
  return valor;
}

bool stringToBool(string v){
  if (v.compare("true") == 0) {
    return true;
  }
  return false;
}

char* stringToCharC(string v){
  return (char*) &v[0];
}

int main() {
	
	/*********************************** Value to String *********************************/

	// Integer
	int i_value  = 42;
	string s_i_value = to_string(i_value);

	// Float
	float f_value  = 42.0;
	string s_f_value = to_string(f_value);
	
	/*********************************** String to Value *********************************/

	// Integer
	i_value = stringToInt("42");

	// Float
	f_value = stringToFloat("42.0");

	// Double
	float d_value = stringToDouble("42.0");

	// Bool
	bool b_value = stringToBool("true");

	return 0;

}
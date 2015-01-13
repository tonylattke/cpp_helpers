#ifndef HERO_H
#define HERO_H

#include <iostream>

using namespace std;

template <class T> class Hero {

	public:
		Hero(T v);
		T combat(T v);

		T power;
};

template <class T> Hero<T>::Hero(T v){
	power = v;
}

template <class T> T Hero<T>::combat(T v){
	if (rand() / (double)RAND_MAX > 0.5) {
		return this;
	}
	return v;
}

#endif
#include "rational.hpp"
#include <iostream>

Rational::Rational() {
	counter = 1;
	denominator = 2;
	std::cout << "Rational " << counter << "/" << denominator << " created" << std::endl;
}

Rational::Rational(int counter, int denominator) {
	if (denominator == 0) {
		std::cout << "Denominator 0 is forbidden, it is replaced by 1" << std::endl;
		denominator = 1;
	}
	this->counter = counter;
	this->denominator = denominator;
	std::cout << "Rational " << this->counter << "/" << this->denominator << " created" << std::endl;
} 

Rational::Rational(const Rational& rational) {
	counter = rational.counter;
	denominator = rational.denominator;
	std::cout << "Rational " << counter << "/" << denominator << " created" << std::endl;
}

Rational::~Rational() {
	std::cout << "Rational " << counter << "/" << denominator << " deleted" << std::endl;
}

std::ostream& operator << (std::ostream &os, const Rational& rational) {
	return os << rational.counter << "/" << rational.denominator;
}

Rational operator + (const Rational& rational1, const Rational& rational2) {
	return Rational(rational1.counter * rational2.denominator + rational2.counter * rational1.denominator,
		rational1.denominator * rational2.denominator); 
}

Rational operator - (const Rational& rational1, const Rational& rational2) {
	return Rational(rational1.counter * rational2.denominator - rational2.counter * rational1.denominator,
		rational1.denominator * rational2.denominator); 
}

Rational operator * (const Rational& rational1, const Rational& rational2) {
	return Rational(rational1.counter * rational2.counter, rational1.denominator * rational2.denominator); 	
}

Rational operator / (const Rational& rational1, const Rational& rational2) {
	return Rational(rational1.counter * rational2.denominator, rational1.denominator * rational2.counter); 		
}

bool operator < (const Rational& rational1, const Rational& rational2) {
	return rational1.counter * rational2.denominator < rational2.counter * rational1.denominator ? true : false;
}

Rational simplify(Rational rhs) {
	int a = rhs.counter, b = rhs.denominator;
	
	while (a != 0 && b != 0) {
		if (a > b) {
			a = a % b;
		} else {
			b = b % a;
		}
	}
	int gcd = a + b;
	
	rhs.counter /= gcd;
	rhs.denominator /= gcd;
	return rhs;
}
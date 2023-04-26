#pragma once 
#include <iostream>

class Rational {
public:

	int counter;
	int denominator;
	
	Rational();
	
	Rational(int, int);
	
	Rational(const Rational*);
		
	~Rational();
};

std::ostream& operator << (std::ostream &, const Rational&);

Rational* operator + (const Rational&, const Rational&);
Rational* operator - (const Rational&, const Rational&);
Rational* operator * (const Rational&, const Rational&);
Rational* operator / (const Rational&, const Rational&);
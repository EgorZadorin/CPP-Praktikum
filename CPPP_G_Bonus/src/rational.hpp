#pragma once 
#include <iostream>

// 1.1a) Klasse Rational (1 Punkt)

class Rational {
public:

	int counter;
	int denominator;
	
	Rational();
	
	Rational(int, int);
	
	Rational(const Rational&);
		
	~Rational();
};

std::ostream& operator << (std::ostream &, const Rational&);

Rational operator + (const Rational&, const Rational&);

Rational operator - (const Rational&, const Rational&);

Rational operator * (const Rational&, const Rational&);

Rational operator / (const Rational&, const Rational&);

bool operator < (const Rational&, const Rational&);

Rational simplify(Rational);
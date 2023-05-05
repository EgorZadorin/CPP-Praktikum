#include <iostream>
#include <rational.hpp>

int main(int argc, char **argv)
{
	// 1.1b) Implementation (1 Punkt)
    Rational a(1, 4), b(1, 2);
	
	// 1.1c) Operatorenüberladung (2 Punkte)
	Rational c, d, e, f;
	
	c = b + a;
	d = b - a;
	e = b * a;
	f = b / a;
	
	std::cout << "c = " << c << std::endl
		<< "d = " << d << std::endl
		<< "e = " << e << std::endl
		<< "f = " << f << std::endl;
		
	Rational min = c;
	
	if (d < min) {
		min = d;
	}
	if (e < min) {
		min = e;
	}
	if (f < min) {
		min = f;
	}
	
	std::cout << "Minimal rational is: " << min << std::endl;
	
	// 1.1d) Rationale Zahlen vereinfachen (1 Punkt)
	
	Rational sim_c = simplify(c), sim_d = simplify(d), 
		sim_e = simplify(e), sim_f = simplify(f);
	
	std::cout << "Simplified c = " << sim_c << std::endl
		<< "Simplified d = " << sim_d << std::endl
		<< "Simplified e = " << sim_e << std::endl
		<< "Simplified f = " << sim_f << std::endl;
	
	return 0;
}

#include <iostream>
#include <rational.hpp>

int main(int argc, char **argv)
{
    Rational a(1, 4), b(1, 2), c(b + a), d(b - a), e(b * a), f(b / a); // Überladung von = auch?
	std::cout << c << std::endl << d << std::endl << e << std::endl << f << std::endl;
	return 0;
}

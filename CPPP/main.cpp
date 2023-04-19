#include <iostream>
#include <limits>
#include "functions.hpp"

int main() {
	/*
	 * Aufgabe 1.2a) Größe von Datentypen 
	 */
	
	std::cout << "Aufgabe 1.2a) Größe von Datentypen" << std::endl << std::endl;
	
	std::cout << "Size of int = " << sizeof(int) << "  Minimal value = " 
		<< std::numeric_limits<int>::min() << "  Maximal value = " << std::numeric_limits<int>::max() << std::endl; 
		
	std::cout << "Size of unsigned int = " << sizeof(unsigned int) << "  Minimal value = " 
		<< std::numeric_limits<unsigned int>::min() << "  Maximal value = " << std::numeric_limits<unsigned int>::max() << std::endl; 
		
	std::cout << "Size of double = " << sizeof(double) << "  Minimal value = " 
		<< std::numeric_limits<double>::min() << "  Maximal value = " << std::numeric_limits<double>::max() << std::endl; 
		
	std::cout << "Size of unsigned short = " << sizeof(unsigned short) << "  Minimal value = " 
		<< std::numeric_limits<unsigned short>::min() << "  Maximal value = " << std::numeric_limits<unsigned int>::max() << std::endl; 
		
	std::cout << "Size of bool = " << sizeof(bool) << "  Minimal value = " 
		<< std::numeric_limits<bool>::min() << "  Maximal value = " << std::numeric_limits<bool>::max() << std::endl; 
	
	/*
	 * Aufgabe 1.2b) Sternenmuster mit Funktionen malen
	 */	
	
	std::cout << std::endl << "Aufgabe 1.2b) Sternenmuster mit Funktionen malen" << std::endl << std::endl;
	
	std::cout << "print_stars(5) function returned this:" << std::endl << std::endl;
	print_stars(5);
	
	std::cout << std::endl << "print_figure(5) function returned this:" << std::endl << std::endl;
	print_figure(5, Left);
	
	/*
	 * Aufgabe 1.2c) Erweiterung durch einen enum-Typen
	 */	
	 
	std::cout << std::endl << "Aufgabe 1.2c) Erweiterung durch einen enum-Typen" << std::endl << std::endl;
	
	std::cout << "print_figure(5, Left) function returned this:" << std::endl << std::endl;
	print_figure(5, Left);
	
	std::cout << std::endl << "print_figure(5, Right) function returned this:" << std::endl << std::endl;
	print_figure(5, Right);
	 
	 
}
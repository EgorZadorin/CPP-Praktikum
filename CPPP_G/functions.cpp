#include "functions.hpp"
#include <iostream>

/*
* Aufgabe 1.2d) Erweiterung durch einen enum-Typen
*/	

void print_spaces(int n) {
	for (int i = 0; i < n; ++i) {
		std::cout << ' ';
	}
}

void print_stars(int n) {
	for (int i = 0; i < n; ++i) {
		std::cout << '*';
	}
	std::cout << std::endl;
}

void print_figure(int n, Direction d) {
	for (int i = 0; i < n; ++i) {
		if (d == Right) {
			print_spaces(i);
		}
		print_stars(n - i);
	}
	for (int i = 2; i <= n; ++i) {
		if (d == Right) {
			print_spaces(n - i);
		}		
		print_stars(i);
	}
}

/*
* Aufgabe 1.2f) Eingabe  der Richtung
*/

Direction enter_direction() {
	int i;
	while (1) {
		std::cout << "Enter 0 for the Left direction or 1 for the Right" << std::endl;
		std::cin >> i;
		if (i > 1 || i < 0) {
			std::cout << "Please, enter the correct value, you entered: " << i << std::endl;
		} else {
			break;
		}

	}
	return i == 0 ? Left : Right;
}
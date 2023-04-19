#include "functions.hpp"
#include <iostream>

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
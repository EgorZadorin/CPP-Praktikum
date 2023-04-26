#pragma once

enum Direction {
	Left,
	Right
};

void print_spaces(int n);

void print_stars(int n);

void print_figure(int n, Direction d);

Direction enter_direction();

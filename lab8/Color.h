#pragma once
#include "Header.h"


class Color {
private:
	char red, green, blue, transparency;

public:
	Color(char, char, char, char);
	int get_red();
	int get_blue();
	int get_green();
	int get_transparency();
	void print();
	
};
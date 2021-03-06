#pragma once
#include "Header.h"
#include "Đircumference.h"


class Circle
{
private:
	Đircumference circle;
	Color color;
public:
	Circle(Đircumference, Color);
	void _set_x(double x);
	void _set_y(double y);
	void _set_rad(double rad);
	void _set_color(string col);
	double get_x();
	double get_y();
	double get_rad();
	double get_square();
	double get_perimeter();
	string get_color();
	void select_color();
	void print();

	friend bool is_color(string color);
};
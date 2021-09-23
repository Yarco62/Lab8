#include"Color.h"


Color::Color(char red, char green, char blue, char transparency)
	:red{ red }, green{ green }, blue{ blue }, transparency{ transparency }
{
}


int Color::get_red() {
	return this->red;
}


int Color::get_green() {
	return this->green;
}


int Color::get_blue() {
	return this->blue;
}


int Color::get_transparency() {
	return this->transparency;
}


void Color::print()
{
	cout << "RGB - " << get_red() << ", " << get_green() << ", " <<get_blue() << ", " << get_transparency() << endl;
}
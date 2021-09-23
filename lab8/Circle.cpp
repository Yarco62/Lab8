#include"Circle.h"


Circle::Circle(Ñircumference _circle, Color _col)
	:circle{ _circle }, color{_col}
{	
}


double Circle::get_x()
{
	return this->circle.get_x();
}


double Circle::get_y()
{
	return this->circle.get_y();
}


double Circle::get_rad()
{
	return this->circle.get_rad();
}


double Circle::get_square()
{
	return PI * pow(this->circle.get_rad(), 2);
}


double Circle::get_perimeter()
{
	return 2 * PI * this->circle.get_rad();
}


void Circle::print() 
{
	cout << "x: " << circle.get_x() << endl;
	cout << "y: " << circle.get_y() << endl;
	cout << "rad: " << circle.get_rad() << endl;
	cout << "Outline color: "; //print color äëÿ îáîäêà 
	cout << "inside color: "; color.print();
}
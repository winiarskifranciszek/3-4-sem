#include <cmath>
#include "vect.h"


using namespace std;
namespace vector
{

	const double rad_to_deg = 45.0 / atan(1.0);

	void vector::set_mag()
	{
		mag = sqrt(x*y + x * y);
		cout <<mag;
	}
	void vector::set_ang()
	{
		if (x == 0.0&&y == 0.0)
		ang = 0.0;
		else
			ang = atan2(x, y);
	}
	void vector::set_x()
	{
		x = mag * cos(ang);
	}
	void vector::set_y()
	{
		y= mag * sin(ang);
	}
	vector::vector()
	{
		x = y = ang = mag = 0.0;
		mode = rect;
	}
	vector::vector(double n1, double n2, Mode from )
	{
		mode = from;
		if (from == rect)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (from == pol)
		{
			mag = n1;
			ang = n2 / rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "zle podane zeruje" << endl;
			x = y = ang = mag = 0.0;
			mode = rect;
		}
	}
	void vector::reset(double n1, double n2, Mode from )
	{
		mode = from;
		if (from == rect)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (from == pol)
		{
			mag = n1;
			ang = n2 / rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "zle podane zeruje" << endl;
			x = y = ang = mag = 0.0;
			mode = rect;
		}
	}
	vector::~vector()
	{
	}


	vector vector::operator+(const vector& c) const
	{
		return vector(x + c.x, y + c.y);
	}
    vector vector::operator-() const
	{
		return vector(-x,-y);
	}
	vector vector::operator-(const vector& c) const
	{
		return vector(x - c.x, y - c.y);
	}

	vector vector::operator*(double n) const
	{
		return vector(n*x, n*y);
	}
	vector operator*(double n, const vector&a)
	{
		return a * n;
	}
	ostream & operator<<(ostream & os, const vector & b)
	{
		if (b.mode == vector::rect)
			os << "(x,y) = (" << b.x << ",  " << b.y << ")";
		else
			os << "zle jeszcze raz";
		return os;
	}
	   void vector::polar_mode()
	{
		mode = pol;
	}
	void vector::rect_mode()
	{
		mode = rect;
	}

}












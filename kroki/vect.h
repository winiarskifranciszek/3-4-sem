
#ifndef vector.h
#define viktor.h

#include <iostream>

namespace vector
{
	class vector
	{
	public:
		enum Mode{ rect, pol };
	private:
		double x;
		double y;
        double mag;
		double ang;
		Mode mode;

		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:

		vector();
		vector(double n1, double n2, Mode from = rect);
		void reset(double n1, double n, Mode from = rect);
		~vector();
		double xval() const { return x; };
		double yval() const { return y; };
		double magval() const { return mag; };
		double angval() const { return ang; };
		void polar_mode();
		void rect_mode();
		vector operator+(const vector& c) const;
		vector operator-(const vector& c) const;
		vector operator-()const;
		vector operator*(double n) const;
		//przyjazn
		friend vector operator*(double n, const vector & a);
		friend std::ostream & operator<<(std::ostream&os, const vector& y);
	};
}








#endif // !vector.h

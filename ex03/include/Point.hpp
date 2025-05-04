#pragma once
#ifndef _POINT_HPP_
# define _POINT_HPP_
# include "Fixed.hpp"
# include <iostream>

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point(void);
		Point(const Point&);
		Point(const Fixed&, const Fixed&);
		Point&	operator=(const Point&);
		bool	operator==(const Point&) const;
		~Point();
		Fixed	x(void) const;
		Fixed	y(void) const;
};
bool	bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream& operator<<(std::ostream& stream, const Point& self);
#endif

#include "Point.hpp"

Fixed	vect_prod(const Point&a, const Point& b, const Point& x)
{
	return (b.x() - a.x()) * (x.y() - a.y()) - (b.y() - a.y()) * (x.x() - a.x());
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (a == point || b == point || c == point)
		return false;
	Fixed signs[] = {
		vect_prod(a, b, point),
		vect_prod(b, c, point),
		vect_prod(c, a, point),
	};
	if (signs[0].toFloat() < 0 && signs[1].toFloat() < 0 && signs[2].toFloat() < 0)
		return (true);
	if (signs[0].toFloat() > 0 && signs[1].toFloat() > 0 && signs[2].toFloat() > 0)
		return (true);
	return (false);
}
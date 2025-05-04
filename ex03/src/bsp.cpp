#include "Point.hpp"

int	vect_prod_sign(const Point&a, const Point& b, const Point& x)
{
	Fixed	result((b.x() - a.x()) * (x.y() - a.y()) - (b.y() - a.y()) * (x.x() - a.x()));
	if (result.toFloat() < 0)
		return -1;
	if (result.toFloat() > 0)
		return 1;
	return 0;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (a == point || b == point || c == point)
		return false;
	int signs[] = {
		vect_prod_sign(a, b, point),
		vect_prod_sign(b, c, point),
		vect_prod_sign(c, a, point),
	};
	const int	sum = signs[0] + signs[1] + signs[2];
	if (sum == 3 || sum == -3)
		return (true);
	return (false);
}
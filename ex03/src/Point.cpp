#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{}

Point::Point(const Fixed& x, const Fixed& y): _x(x), _y(y)
{}

Point::Point(const Point& self): _x(self._x), _y(self._y)
{}

Point::~Point()
{}

Point& Point::operator=(const Point& self)
{
	if (this != &self)
	{}
	return *this;
}

bool	Point::operator==(const Point& self) const
{
	return _x == self._x && _y == self._y;
}

Fixed	Point::x(void) const
{
	return _x;
}

Fixed	Point::y(void) const
{
	return _y;
}

std::ostream& operator<<(std::ostream& stream, const Point& self)
{
	stream << '(' << self.x() << ", " << self.y() << ')';
	return stream;
}

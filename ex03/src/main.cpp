#include "Point.hpp"
#include <iostream>

int	main(void)
{
	Point	points[] = {
		Point(0, 0),
		Point(1, 1),
		Point(1, 2),
		Point(1, 3),
		Point(5.2f, 3),
		Point(5, 8),
	};
	Point	form[] = {
		Point(0, 0),
		Point(10, 0),
		Point(0, 10),
	};
	int		i = 0;

	while (i < 6)
	{
		if (bsp(form[0], form[1], form[2], points[i]))
			std::cout << points[i] << " is inside the form"<< std::endl;
		else
			std::cout << points[i] << " is outside of the form"<< std::endl;
		i++;
	}
	return (0);
}

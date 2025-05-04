#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed	b(Fixed(4) * Fixed(2));
	std::cout << b << std::endl;
	return (0);
}

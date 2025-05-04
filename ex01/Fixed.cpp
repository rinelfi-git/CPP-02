#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::bit = 8;

Fixed::Fixed(void): _raw(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr) {
    std::cout << "Int constructor called" << std::endl; 
    _raw = nbr << Fixed::bit;
}

Fixed::Fixed(const float nbr) {
    std::cout << "Float constructor called" << std::endl; 
    _raw = (int)roundf(nbr * (float)(1 << Fixed::bit));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& object) {
    std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

Fixed &Fixed::operator=(const Fixed& object) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &object) {
        _raw = object.getRawBits();
    }
    return (*this);
}

int	Fixed::toInt(void) const {
    return (_raw >> Fixed::bit);
}

float   Fixed::toFloat(void) const {
    return static_cast<float>(_raw) / static_cast<float>(1 << Fixed::bit);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBit(const int raw) {
    _raw = raw;
}

std::ostream&   operator<<(std::ostream& stream, const Fixed& instance)
{
    stream << instance.toFloat();
    return (stream);
}

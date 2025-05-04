#include "Fixed.hpp"
#include <iostream>

const int Fixed::bit = 8;

Fixed::Fixed(void): _raw(0) {
    std::cout << "Default constructor called" << std::endl;
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

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBit(const int raw) {
    _raw = raw;
}

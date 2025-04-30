#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void): _raw(0) {
    std::cout << "Defautl constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& instance): _raw(instance._raw) {
    std::cout << "Copy assignment operator called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& instance) {
    _raw = instance._raw;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBit(const int raw) {
    _raw = raw;
}

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::bit = 8;

Fixed::Fixed(void): _raw(0) {}

Fixed::Fixed(const int nbr) {
    _raw = nbr << Fixed::bit;
}

Fixed::Fixed(const float nbr) {
    _raw = (int)roundf(nbr * (float)(1 << Fixed::bit));
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed& object) {
    *this = object;
}

Fixed &Fixed::operator=(const Fixed& object) {
    if (this != &object) {
        _raw = object.getRawBits();
    }
    return (*this);
}

bool    Fixed::operator>(const Fixed& instance) const
{
	return toFloat() > instance.toFloat();
}

bool    Fixed::operator<(const Fixed& instance) const
{
	return toFloat() < instance.toFloat();
}

bool    Fixed::operator>=(const Fixed& instance) const
{
	return toFloat() >= instance.toFloat();
}

bool    Fixed::operator<=(const Fixed& instance) const
{
    return toFloat() <= instance.toFloat();
}

bool    Fixed::operator==(const Fixed& instance) const
{
    return toFloat() == instance.toFloat();
}

Fixed    Fixed::operator+(const Fixed& instance) const
{
    return (Fixed(toFloat() + instance.toFloat()));
}

Fixed    Fixed::operator-(const Fixed& instance) const
{
    return (Fixed(toFloat() - instance.toFloat()));
}

Fixed    Fixed::operator*(const Fixed& instance) const
{
    return (Fixed(toFloat() * instance.toFloat()));
}

Fixed    Fixed::operator/(const Fixed& instance) const
{
    return (Fixed(toFloat() / instance.toFloat()));
}

int	Fixed::toInt(void) const {
    return (_raw >> Fixed::bit);
}

float   Fixed::toFloat(void) const {
    return static_cast<float>(_raw) / static_cast<float>(1 << Fixed::bit);
}

int Fixed::getRawBits(void) const {
    return _raw;
}

void Fixed::setRawBit(const int raw) {
    _raw = raw;
}
Fixed	Fixed::operator++(void)
{
	_raw++;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	_raw++;
	return (tmp);
}
Fixed	Fixed::operator--(void)
{
	_raw--;
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	_raw--;
	return (tmp);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a._raw < b._raw)
        return a;
    return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a._raw < b._raw)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a._raw > b._raw)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a._raw > b._raw)
        return a;
    return b;
}

std::ostream&   operator<<(std::ostream& stream, const Fixed& instance)
{
    stream << instance.toFloat();
    return (stream);
}

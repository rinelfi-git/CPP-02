#pragma once
#ifndef _FIXED_H_
# define _FIXED_H_
# include <iostream>

class Fixed{
    private:
        int _raw;
        static const int bit;
    public:
        Fixed(void);
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed(const Fixed& instance);
        ~Fixed();
        Fixed   &operator=(const Fixed& instance);
        bool    operator>(const Fixed& instance) const;
        bool    operator<(const Fixed& instance) const;
        bool    operator>=(const Fixed& instance) const;
        bool    operator<=(const Fixed& instance) const;
        Fixed   operator+(const Fixed& instance) const;
        Fixed   operator-(const Fixed& instance) const;
        Fixed   operator*(const Fixed& instance) const;
        Fixed   operator/(const Fixed& instance) const;
        Fixed	operator++(void);
        Fixed	operator++(int);
        Fixed	operator--(void);
        Fixed	operator--(int);

        int     getRawBits(void) const;
        void    setRawBit(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
};

std::ostream&   operator<<(std::ostream& os, const Fixed& obj);
#endif
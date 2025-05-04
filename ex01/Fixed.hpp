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
        Fixed(const Fixed&);
        ~Fixed();
        Fixed &operator=(const Fixed&);

        int     getRawBits(void) const;
        void    setRawBit(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;
};

std::ostream&   operator<<(std::ostream& os, const Fixed& obj);
#endif
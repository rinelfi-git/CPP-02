#pragma once
#ifndef _FIXED_H_
# define _FIXED_H_

class Fixed{
    private:
        int _raw;
        static const int bit;
    public:
        int getRawBits(void) const;
        void setRawBit(int const raw);
        Fixed(void);
        Fixed(const Fixed&);
        ~Fixed();
        Fixed &operator=(const Fixed&);
};
#endif
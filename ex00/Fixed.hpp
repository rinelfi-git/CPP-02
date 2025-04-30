#pragma once
#ifndef _FIXED_H_
# define _FIXED_H_

class Fixed{
    private:
        int _raw;
        static const int bit = 8;
    public:
        int getRawBits(void) const;
        void setRawBit(int const raw);
        Fixed(void);
        Fixed(const Fixed&);
        ~Fixed();
        Fixed &operator=(const Fixed&);
};
#endif
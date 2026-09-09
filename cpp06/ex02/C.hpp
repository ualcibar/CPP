#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C: public Base
{
	public:
		C(void);
		C(const C &src);
		~C();

		C & operator=(const C & rhs);
	private:
};

std::ostream & operator<<(std::ostream & os, C & dt);

#endif

#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B: public Base
{
	public:
		B(void);
		B(const B &src);
		~B();

		B & operator=(const B & rhs);
	private:
};

std::ostream & operator<<(std::ostream & os, B & dt);

#endif

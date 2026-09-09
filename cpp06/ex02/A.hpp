#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A: public Base
{
	public:
		A(void);
		A(const A &src);
		~A();

		A & operator=(const A & rhs);
	private:
};

std::ostream & operator<<(std::ostream & os, A & dt);

#endif

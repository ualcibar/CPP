#include "C.hpp"

C::C(void)
{
	return ;
}

C::C(const C &src)
{
	*this = src;
}

C::~C()
{ }

C &C::operator=(const C & rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, C & dt)
{
	(void)dt;
	os << "C";
	return (os);
}

#include "B.hpp"

B::B(void)
{
	return ;
}

B::B(const B &src)
{
	*this = src;
}

B::~B()
{ }

B &B::operator=(const B & rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, B & dt)
{
	(void)dt;
	os << "B";
	return (os);
}

#include "A.hpp"

A::A(void)
{
	return ;
}

A::A(const A &src)
{
	*this = src;
}

A::~A()
{ }

A &A::operator=(const A & rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, A & dt)
{
	(void)dt;
	os << "A";
	return (os);
}

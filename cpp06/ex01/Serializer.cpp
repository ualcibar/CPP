#include <cstdint>
#include <iostream>
#include "Serializer.hpp"

Serializer::Serializer(void)
{
	return ;
}

Serializer::Serializer(const Serializer &src)
{
	*this = src;
}

Serializer::~Serializer()
{ 
	
}

uintptr_t   Serializer::serialize(Data *data)
{
	uintptr_t  tmp;
	
	tmp = reinterpret_cast<uintptr_t>(data);
	return (tmp);
}

Data* Serializer::deserialize(uintptr_t unsignedintpointer)
{
	Data	*tmp;
	tmp = reinterpret_cast<Data *>(unsignedintpointer);
	return tmp;
}

Serializer &Serializer::operator=(const Serializer & rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, Serializer & dt)
{
	(void)dt;
	return (os);
}

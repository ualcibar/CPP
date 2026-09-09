#ifndef Serializer_HPP
#define Serializer_HPP

#include <iostream>

struct Data
{
	int age;        
	std::string name;
};

class Serializer
{
	public:
		static uintptr_t   serialize(Data *data);
		static Data*		deserialize(uintptr_t unsignedintpointer);

		Serializer & operator=(const Serializer & rhs);
	private:
		Serializer(void);
		Serializer(const Serializer &src);
		~Serializer();
};

std::ostream & operator<<(std::ostream & os, Serializer & dt);

#endif

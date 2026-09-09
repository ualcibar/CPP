#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#include <cstdint>
#include <iostream>
#include <ctime>
#include <unistd.h>

Base* generate()
{
	Base *base;
	srand(time(nullptr));
	int num = rand() % 3 + 1;
	if (num == 1)
		base = new A();
	if (num == 2)
		base = new B();;
	if (num == 3)
		base = new C();
	std::cout << num << std::endl;
	return(base);
}

void identify(Base* p)
{
	if(!p)
	{
		std::cout << "null pointer" << std::endl;
		return;
	}
	A *a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "a pointer" << std::endl;
		return;
	}
	B *b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "b pointer" << std::endl;
		return;
	}
	C *c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "c pointer"  << std::endl;
		return;
	}
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "a reference" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "b reference" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "c reference" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "not initialized reference" << std::endl;
			}
		}
	}
}

int main ()
{
	Base base;
	Base* my_base = NULL;

	identify(base);
	identify(my_base);
	std::cout << "------------ " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << i << " <- round" << std::endl << std::endl;
		usleep(990090);
		my_base = generate();
		identify(*my_base);
		identify(my_base);
		std::cout << "------------ " << std::endl << std::endl;
	}
}

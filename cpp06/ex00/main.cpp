#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of inputs" << std::endl;
		return 0;
	}
	ScalarConverter::convert(argv[1]);
}

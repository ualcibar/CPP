#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
#include "ScalarConverter.hpp"

bool printableStr(char* argv)
{
	int i = 0;
	while (argv[i] != '\0')
	{
		if(std::isprint((argv[i]) == 0))
			return false;
		i++;
	}
	return true;
}

bool isINFF(std::string argv)
{
	const char* i[3];
	int j = 0;

	i[0] = "+inff";
	i[1] = "-inff";
	i[2] = "nanf";
	
	while (j < 3)
	{
		if (i[j] == argv)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << argv << std::endl;
			std::cout << "double: " << argv.substr(0, ((int)argv.length() - 1)) << std::endl;
			return true;
		}
		j++;
	}
	return false;
}

bool isINF(std::string argv)
{
	const char* i[3];
	int j = 0;

	
	i[0] = "+inf";
	i[1] = "-inf";
	i[2] = "nan";
	
	while (j < 3)
	{
		if (i[j] == argv)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << argv << "f" << std::endl;
			std::cout << "double: " << argv << std::endl;
			return true;
		}
		j++;
	}
	return false;
}

bool check_number(std::string str)
{
	
	if ((str[0] == '-' || str[0] == '+') && str.length() > 1)
	{
		for (int i = 1; i < (int)str.length(); i++)
			if (isdigit(str[i]) == false)
				return false;
		return true;
	}
	for (int i = 0; i < (int)str.length(); i++)
		if (isdigit(str[i]) == false)
			return false;
	return true;
}

bool check_float(std::string str)
{
	int punt;

	punt = 0;
	if (str[0] == '-' || str[0] == '+' )
	{
		if (str[((int)str.length() - 1)] == 'f')
		{
			for (int i = 1; i < (int)str.length(); i++)
			{
				if ((i != 1 || i != ((int)str.length() - 2)) && str[i] == '.')
				{
					punt++;
					i++;
				}
				if (punt > 1)
					return false;
				if (isdigit(str[i]) == false && i != (int)str.length() - 1)
					return false;
			}
		}
		else
			return false;
		return true;
	}
	if (str[((int)str.length() - 1)] == 'f')
	{
		for (int i = 0; i < (int)str.length(); i++)
		{
			if ((i != 0 || i != ((int)str.length() - 1)) && str[i] == '.')
			{
				punt++;
				i++;
			}
			if (punt > 1)
				return false;
			if (isdigit(str[i]) == false && i != (int)str.length() - 1 )
				return false;
		}
	}
	else
		return false;
	return true;
}

bool check_double(std::string str)
{
	int punt;

	punt = 0;
	if (str[0] == '-' || str[0] == '+' )
	{
		for (int i = 1; i < (int)str.length(); i++)
		{
			if ((i != 1 || i != ((int)str.length() - 2)) && str[i] == '.')
			{
				punt++;
				i++;
			}
			if (punt > 1)
				return false;
			if (isdigit(str[i]) == false)
				return false;
		}
		return true;
	}
	for (int i = 0; i < (int)str.length(); i++)
	{
		if ((i != 0 || i != ((int)str.length() - 1)) && str[i] == '.')
		{
			punt++;
			i++;
		}
		if (punt > 1)
			return false;
		if (isdigit(str[i]) == false)
			return false;
	}
	return true;
}


void isInt(int i)
{
	if (i >= 32 && i <= 126)
		std::cout << "char: " <<  "'"  << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

bool isChar(char *argv)
{
	char c;

	if (argv[0] >= 31 && argv[0] <= 126 && strlen(argv) == 1 && !check_number(argv))
	{
		c = static_cast<char>(argv[0]);
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: "<< static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: "<< static_cast<double>(c) << std::endl;
		return true;
	}
	return false;
}

void isFloat(float f)
{
	if (f >= 32.00f && f <= 126.00f)
		std::cout << "char: " << "'" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "Char: " <<  "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: "<< f << "f" << std::endl;
	std::cout << "double: "<< static_cast<double>(f) << std::endl;
}

void isDouble(double f)
{
	if (f >= 32.00f && f <= 126.00f)
		std::cout << "char: " << "'" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "Char: " <<  "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: "<< static_cast<float>(f) << "f" << std::endl;
	std::cout << "double: "<< f << std::endl;
}

int ScalarConverter::convert(char *num)
{
	std::cout << std::setprecision(1) << std::fixed;
	if (isChar(num))
		return (0);
	if (check_number(num))
	{
	 	isInt(std::stoi(num));
		return (0);
	}
	if(isINFF(num))
		return (0);	
	if(isINF(num))
		return (0);		
	if (check_float(num))
	{
		if (strcmp(num, "-f") == 0)
			return (0);
		isFloat(std::stof(num));
		return (0);
	}
	if (check_double(num))
	{
		isDouble(std::atof(num));
		return (0);
	}
	return (4);
}

ScalarConverter::ScalarConverter(void)
{
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter()
{ 
	
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter & rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, ScalarConverter & dt)
{
	(void)dt;
	return (os);
}
